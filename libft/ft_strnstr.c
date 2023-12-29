/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:33:17 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:33:19 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	l_i;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		l_i = 0;
		if (big[i] == little[l_i])
		{
			while (i + l_i < len && big[i + l_i] == little[l_i])
			{
				l_i++;
				if (little[l_i] == '\0')
					return ((char *)(big + i));
			}
		}
		i++;
	}
	return (0);
}
