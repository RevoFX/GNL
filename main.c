/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/19 20:00:57 by jcho              #+#    #+#             */
/*   Updated: 2018/04/30 21:38:48 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

/*int		main(int argc, char **argv)
{
	int fd;
	char *line;
	int ret; 
	int i;

	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				printf("MAIN:%d, line %d>%s\n", ret, i, line);
			}
			close(fd);
       	}
	}
	return (1);
}*/

int		main(int argc, char **argv)
{
	int		fd;
 	int		fd2;
	char	*line;
	int		ret;
	int		i;
	int 	f1;
	int		f2;

	f1 = 1;
	f2 = 2;
	if (argc >= 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while((ret = get_next_line(fd, &line)) == 1)
			{
				printf("Ret: %i\n", ret);
				i++;
				printf("File: %d | Ret:%d | line %d>%s\n", f1, ret, i, line);
			}
				printf("Ret: %i\n", ret);
			close(fd);
			i = 0;
			fd2 = open(argv[2], O_RDONLY);
			while((ret = get_next_line(fd2, &line)) == 1)
			{
				i++;
				printf("File: %d | Ret:%d | line %d>%s\n", f2, ret, i, line);
			}
			close(fd2);
		}
	}
	return (1);
}
