/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:29:52 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:29:55 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 1;
	if (n == 0)
		return (0);
	while (*ptr == *ptr2 && i < n)
	{
		ptr++;
		ptr2++;
		i++;
	}
	return (*ptr - *ptr2);
}
