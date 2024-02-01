/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:38:57 by pjimenez          #+#    #+#             */
/*   Updated: 2024/02/01 13:42:35 by pjimenez         ###   ########.fr       */
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
