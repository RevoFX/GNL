/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 17:29:06 by jcho              #+#    #+#             */
/*   Updated: 2018/03/28 21:45:20 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**ft_wordtoary(const char *s, char c, int nb_word, int word_len)
{
	char	**array;
	int		i;
	int		j;
	int		k;

	if (!(array = (char **)malloc(sizeof(*array) * nb_word + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			if (!(array[j] = (char *)malloc(sizeof(**array) * word_len + 1)))
				return (NULL);
			while (s[i] != c && s[i])
				array[j][k++] = s[i++];
			array[j++][k] = '\0';
		}
	}
	array[j] = NULL;
	return (array);
}

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		nb_word;
	int		len_word;
	int		max_len_word;

	if (!s || !c)
		return (NULL);
	i = 0;
	nb_word = 0;
	max_len_word = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			nb_word++;
			len_word = 0;
			while (s[i] != c && s[i++])
				len_word++;
			if (len_word > max_len_word)
				max_len_word = len_word;
		}
	}
	return (ft_wordtoary(s, c, nb_word, max_len_word));
}
