/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:30:01 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:30:03 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p_d;
	unsigned char	*p_s;

	p_d = (unsigned char *)dest;
	p_s = (unsigned char *)src;
	i = 0;
	if (!p_d && !p_s)
		return (0);
	while (i < n)
	{
		p_d[i] = p_s[i];
		i++;
	}
	return (dest);
}
