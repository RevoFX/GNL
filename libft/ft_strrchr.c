/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/25 12:39:24 by jcho              #+#    #+#             */
/*   Updated: 2018/03/12 20:50:30 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s) + 1;
	while (--len)
	{
		if (s[len] == (char)c)
		{
			return ((char *)s + len);
		}
	}
	if (s[len] == (char)c)
	{
		return ((char*)s + len);
	}
	return (NULL);
}
