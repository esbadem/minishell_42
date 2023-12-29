/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_blocks_utils2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayse/esin <esbadem/aysozen@42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:22:48 by ayse/esin         #+#    #+#             */
/*   Updated: 2023/11/17 13:43:09 by ayse/esin        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"
#include "libft.h"

void	ft_redir_error(t_block *block, char *str, char *filename)
{
	ft_putstr_fd("minishell: ", 2);
	ft_putstr_fd(str, 2);
	ft_putstr_fd(": No such file or directory\n", 2);
	if (filename)
		free(filename);
	if (!block)
		return ;
	if (block->cmd_name)
		free_string(block->cmd_name);
	if (block->args)
		free_matrix(block->args);
	free(block);
}
