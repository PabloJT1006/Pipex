/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:38:57 by pjimenez          #+#    #+#             */
/*   Updated: 2024/01/11 11:46:43 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void errors()
{
    perror("Pipex");
    ft_printf("%s\n",strerror(errno));
    exit(EXIT_FAILURE);
}