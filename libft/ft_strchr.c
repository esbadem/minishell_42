/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:31:22 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:31:24 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s1, int c)
{
	if (c > 127)
		return ((char *)s1);
	while (*s1)
	{
		if (*s1 == c)
			return ((char *)(s1));
		s1++;
	}
	if (c == '\0')
		return ((char *)s1);
	return ((char *)0);
}
