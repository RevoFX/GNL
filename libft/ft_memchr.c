/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 14:17:40 by jcho              #+#    #+#             */
/*   Updated: 2018/03/11 21:27:49 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr1;
	size_t			i;

	ptr1 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] == (unsigned char)c)
			return (ptr1 + i);
		i++;
	}
	return (NULL);
}
