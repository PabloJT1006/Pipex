/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:54:06 by pjimenez          #+#    #+#             */
/*   Updated: 2024/02/02 15:37:43 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <fcntl.h>
#include <string.h>
#include <sys/errno.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define READ_END 0
#define WRITE_END 1

char	*ft_find_cmd_path(char *cmd, char **envp);
void	ft_execute(char *argv, char **envp, int end);
void	ft_child_proces(char **argv, char **envp, int *end);
void	ft_parent_proces(char **argv, char **envp, int *end);
void	ft_error(char *str_error);
void	error_file(char *file);
void	error_cmd(char *cmd);
void	error_file(char *file);
void    ft_error_perm();
int     all_spaces(char *str);