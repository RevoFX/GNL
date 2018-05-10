/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 17:28:24 by jcho              #+#    #+#             */
/*   Updated: 2018/03/11 21:24:37 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	d = ft_strlen(dest);
	s = ft_strlen(src);
	i = 0;
	if (size <= d)
	{
		return (size + s);
	}
	else
	{
		while (d + i < size - 1)
		{
			dest[d + i] = src[i];
			i++;
		}
	}
	dest[d + i] = '\0';
	return (d + s);
}
