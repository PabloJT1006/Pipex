/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:38:57 by pjimenez          #+#    #+#             */
/*   Updated: 2024/01/24 18:20:42 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
void	ft_error(char *str_error)
{
	perror(str_error);
	exit(EXIT_FAILURE);
}

// void	error_file(char *file)
// {
// 	perror("asdfasdfsadfsdf");
// 	ft_printf("%s: %s\n", strerror(errno), file);
// 	exit(EXIT_FAILURE);
// }