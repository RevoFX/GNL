/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:18:30 by jcho              #+#    #+#             */
/*   Updated: 2018/03/12 20:08:53 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cur;

	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL || s == NULL)
	{
		return (NULL);
	}
	cur = 0;
	while (cur < len)
	{
		str[cur] = s[start + cur];
		cur++;
	}
	str[cur] = '\0';
	return (str);
}
