/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:30:09 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:30:11 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if ((s) > (d))
		ft_memcpy(dest, src, len);
	else if ((d) > (s))
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	return (dest);
}
