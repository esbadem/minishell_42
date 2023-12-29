/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_signal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:23:20 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/14 15:23:20 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include <readline/readline.h>
#include <sys/ioctl.h>
#include "libft.h"
#include <signal.h>

void	sig_int(int sig)
{
	(void)sig;
	ioctl(STDIN_FILENO, TIOCSTI, "\n");
	rl_replace_line("", 0);
	rl_on_new_line();
}

void	ft_signal(int flag, t_data *g_data)
{
	if (flag == 1)
	{
		signal(SIGINT, sig_int);
		signal(SIGQUIT, SIG_IGN);
	}
	else if (flag == 3)
	{
		ft_exit("\b\bexit\n", 1, g_data);
	}
}
