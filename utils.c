/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:38:57 by pjimenez          #+#    #+#             */
/*   Updated: 2024/02/02 16:23:42 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_error(char *str_error)
{
	perror(str_error);
	exit(EXIT_FAILURE);
}

void	error_file(char *file)
{
	ft_putstr_fd("zsh: No such file or directory: ", 2);
	ft_putstr_fd(file, 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}

void	error_cmd(char *cmd)
{
	ft_putstr_fd("zsh: Command not found: ", 2);
	ft_putstr_fd(cmd, 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}

void	ft_error_perm(void)
{
	ft_putstr_fd("zsh: Permission denied: ", 2);
	ft_putstr_fd("\n", 2);
	exit(EXIT_FAILURE);
}

int	all_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
