/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 12:52:46 by jcho              #+#    #+#             */
/*   Updated: 2018/03/13 20:24:41 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	nlen = ft_strlen(ndl);
	if (*ndl == 0)
		return ((char *)h);
	i = 0;
	while (h[i] != '\0' && len != '\0')
	{
		j = 0;
		while (h[i + j] == ndl[j] && j < len)
		{
			if (j == nlen - 1)
			{
				return ((char *)h + i);
			}
			j++;
		}
		i++;
		len--;
	}
	return (NULL);
}
