/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:54:06 by pjimenez          #+#    #+#             */
/*   Updated: 2023/12/19 17:58:15 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/errno.h>
#include <string.h>
# include "libft/libft.h"

//extremo del cual vamos leer lo que se haya escrito
#define READ_END    0
//extremo en el que vamos a escribir el resultado de las instrucciones pertinentes
#define WRITE_END   1

//funcion que habra los files y haga las cosas correspondientes
char *find_cmd_path(char *cmd, char **envp);
void    ft_execute(char *argv, char **envp);
void child_proces (char **argv, char **envp,int *end);
void parent_proces (char **argv, char **envp,int *end);
void errors();
// void child_process(char **argv, int *fd, char **envp);
// void parent_process(char **argv, int *fd, char **envp);