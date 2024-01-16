/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:38:57 by pjimenez          #+#    #+#             */
/*   Updated: 2024/01/16 13:54:39 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_errors(void)
{
	perror("Error");
	exit(EXIT_FAILURE);
	exit(1);
}

void ft_not_found(char *cmd)
{
	ft_printf("Error: Command not found: %s\n",cmd);
	exit(1);
}
