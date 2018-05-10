/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 12:53:30 by jcho              #+#    #+#             */
/*   Updated: 2018/03/08 14:51:23 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	pos;
	size_t			len;

	i = 0;
	len = ft_strlen(needle);
	if (len == 0)
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0')
	{
		pos = 0;
		while (haystack[i + pos] == needle[pos])
		{
			if (pos == (len - 1))
			{
				return ((char *)haystack + i);
			}
			pos++;
		}
		i++;
	}
	return (NULL);
}
