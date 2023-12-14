/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fts_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:45:19 by pjimenez          #+#    #+#             */
/*   Updated: 2023/12/13 16:30:07 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
//ft que abre el infile el cual utiliza como stdin, para porcesarlo y volcarlo en el stdout (writeend)
void child_process(char **argv, int *fd, char **envp)
{
    int infile;   
    
    infile = open(argv[1],O_RDONLY);
    if (infile == -1)
        return ; //delvolvemos mensaje de error
    dup2(infile,STDIN_FILENO);
    dup2(fd[WRITE_END],STDOUT_FILENO);
    close(fd[READ_END]);
    ft_execute(argv[2],envp);
}

void parent_process(char **argv, int *fd, char **envp)
{
    int outfile;
    outfile = open(argv[4],O_WRONLY | O_CREAT | 0777);
    if (outfile == -1)
        return ; //devolvemso mensaje de error
    close(fd[WRITE_END]);
    dup2(fd[READ_END],STDIN_FILENO);
    dup2(outfile,STDOUT_FILENO);
    ft_execute(argv[3],envp);
}