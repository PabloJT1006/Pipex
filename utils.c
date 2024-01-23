/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:38:57 by pjimenez          #+#    #+#             */
/*   Updated: 2024/01/23 12:23:16 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_errors(void)
{
	perror("Error");
	exit(EXIT_FAILURE);
	exit(1);
}

void	ft_not_found(char *cmd)
{
	ft_printf("Error: command not found: %s\n", cmd);
	exit(1);
}

void	ft_file_error(char *file)
{
	ft_printf("Error: no such file or directory: %s\n",file);
	exit(1);
}
