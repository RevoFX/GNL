/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 18:13:48 by jcho              #+#    #+#             */
/*   Updated: 2018/03/11 20:00:30 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		cpy_end;

	i = 0;
	cpy_end = 0;
	while (i < n)
	{
		if (src[i] && !cpy_end)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
			cpy_end = 1;
		}
		i++;
	}
	return (dest);
}
