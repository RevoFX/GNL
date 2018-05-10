/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 17:45:19 by jcho              #+#    #+#             */
/*   Updated: 2018/03/12 20:14:09 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		len;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s1) + ft_strlen(s2);
	fresh = (char *)malloc(sizeof(char) * (len + 1));
	if (fresh == NULL)
	{
		return (NULL);
	}
	ft_strcpy(fresh, s1);
	ft_strcat(fresh, s2);
	return (fresh);
}
