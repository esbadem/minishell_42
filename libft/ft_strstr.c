/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:33:32 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:33:34 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *big, char *little)
{
	int	i;
	int	j;
	int	l_i;

	i = -1;
	if (!big)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[++i])
	{
		l_i = 0;
		if (big[i] == little[l_i])
		{
			j = i;
			while (big[j] == little[l_i])
			{
				l_i++;
				j++;
				if (little[l_i] == '\0')
					return ((char *)(big + i));
			}
		}
	}
	return (0);
}
