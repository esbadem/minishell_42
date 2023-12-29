/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:32:15 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:32:17 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2, int total_len)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	i = -1;
	j = -1;
	if ((!s1 && !s2))
		return (NULL);
	if (s1 && !s2)
		return (s1);
	else if (!s1 && s2)
		return (s2);
	newstr = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!newstr)
		return (NULL);
	while (s1[++i] != '\0')
		newstr[i] = s1[i];
	while (s2[++j] != '\0')
		newstr[i + j] = s2[j];
	free(s1);
	newstr[i + j] = '\0';
	return (newstr);
}
