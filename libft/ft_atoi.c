/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:24:51 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:24:53 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t			i;
	unsigned int	res;
	int				sign;
	size_t			sign_nbr;

	i = 0;
	res = 0;
	sign = 1;
	sign_nbr = 0;
	while ((str[i] == 32 || (str[i] >= 9 && str[i] <= 14)))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		sign_nbr++;
		i++;
	}
	if (sign_nbr > 1)
		return (0);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - 48);
	if (sign_nbr == 1 && sign == -1)
		return (-res);
	return (res);
}
