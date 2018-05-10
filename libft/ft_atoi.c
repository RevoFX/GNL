/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:45:27 by jcho              #+#    #+#             */
/*   Updated: 2018/04/29 20:08:04 by jcho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int		i;
	long long			number;
	int					negative;

	number = 0;
	negative = 1;
	i = 0;
	while (str[i] >= 0x08 && str[i] <= 0x20)
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		number *= 10;
		number += (long)str[i] - '0';
		i++;
	}
	return (number * negative);
}
