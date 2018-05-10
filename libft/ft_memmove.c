/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 12:19:16 by jcho              #+#    #+#             */
/*   Updated: 2018/03/12 19:20:37 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	if (d <= s || s >= (d + len))
	{
		while (len)
		{
			*d++ = *s++;
			len--;
		}
	}
	else
	{
		s = s + len - 1;
		d = d + len - 1;
		while (len)
		{
			*d-- = *s--;
			len--;
		}
	}
	return (dst);
}
