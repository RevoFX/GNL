/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 19:01:17 by jcho              #+#    #+#             */
/*   Updated: 2018/04/29 19:34:04 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		check_rmdr(char **rmdr, char **line)
{
	char	*temp;

	temp = ft_strchr(*rmdr, '\n');
	if (temp)
	{
		*line = ft_strsub(*rmdr, 0, temp - *rmdr);
		ft_memmove(*rmdr, temp + 1, ft_strlen(temp));
		temp = NULL;
		return (1);
	}
	return (0);
}

static int		check_read(int fd, char **rmdr, char **line)
{
	char	buf[BUFF_SIZE + 1];
	char	*temp;
	int		ret;

	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		temp = NULL;
		if (*rmdr)
		{
			temp = ft_strdup(*rmdr);
			ft_memdel((void **)rmdr);
			*rmdr = ft_strjoin(temp, buf);
			ft_memdel((void **)&temp);
		}
		else
			*rmdr = ft_strdup(buf);
		if (check_rmdr(rmdr, line))
			return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char		*rmdr[9999];
	int				res;

	if (fd < 0 || fd > 9998 || !line)
		return (-1);
	if (rmdr[fd] && check_rmdr(&rmdr[fd], line))
		return (1);
	res = check_read(fd, &rmdr[fd], line);
	if (res != 0)
		return (res);
	if (rmdr[fd] == NULL || rmdr[fd][0] == '\0')
		return (0);
	*line = rmdr[fd];
	rmdr[fd] = NULL;
	return (1);
}
