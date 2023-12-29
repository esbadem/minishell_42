/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:33:24 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:33:26 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastspot;

	lastspot = 0;
	if (c > 127)
		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			lastspot = (char *)s;
		s++;
	}
	if (lastspot)
		return (lastspot);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
