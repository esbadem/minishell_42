/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:21:13 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/17 13:43:45 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "libft.h"

int	ft_env(t_data	*g_data)
{
	t_env	*env;

	env = g_data->environmental;
	while (env)
	{
		ft_putstr_fd(env->front, 1);
		ft_putstr_fd("=", 1);
		ft_putstr_fd(env->back, 1);
		ft_putstr_fd("\n", 1);
		env = env->next;
	}
	return (0);
}
