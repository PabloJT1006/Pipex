/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:38:57 by pjimenez          #+#    #+#             */
/*   Updated: 2024/01/23 19:41:03 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error_one(char *str_perror, int exit_)
{
	perror(str_perror);
	exit(exit_);
}

void	error_two(char *str_perror, char *file, int exit_)
{
	ft_printf("%s: %s\nNo such file or directory: %s\n",
		str_perror, strerror(errno), file);
	exit(exit_);
}