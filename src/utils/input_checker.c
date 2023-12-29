/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_checker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysozen <aysozen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:23:55 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/17 14:47:08 by aysozen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "libft.h"

int	ft_quote_check(char *input)
{
	int	i;
	int	quote;
	int	dquote;

	i = 0;
	quote = 0;
	dquote = 0;
	while (input[i])
	{
		if (input[i] == '\'' && dquote == 0)
			quote = !quote;
		if (input[i] == '\"' && quote == 0)
			dquote = !dquote;
		i++;
	}
	if (quote == 1 || dquote == 1)
	{
		ft_putstr_fd("Error: quote not closed\n", 1);
		return (0);
	}
	return (1);
}

int	check_strange_chars(t_expand *exp)
{
	while (exp)
	{
		if (exp->str && ft_is_redir(exp->str))
		{
			if (!exp->next)
				return ('r');
		}
		if (exp->str && exp->str[0] == '|')
		{
			if (exp->next && exp->next->str && exp->next->str[0] == '|')
				return ('q');
			if (!exp->next)
				return ('x');
		}
		exp = exp->next;
	}
	return (0);
}

void	ft_ft_ft(t_data *g_data)
{
	free_exp(g_data->exp);
	free_pipes(g_data->fd_pipe, g_data->block_cnt);
}
