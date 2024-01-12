/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:46:45 by pjimenez          #+#    #+#             */
/*   Updated: 2024/01/11 16:41:21 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	child_proces(char **argv, char **envp, int *end)
{
	int	infile;

	infile = open(argv[1], O_RDONLY, 0777);
	if (infile == -1)
		errors();
	dup2(end[WRITE_END], STDOUT_FILENO);
	dup2(infile, STDIN_FILENO);
	close(end[READ_END]);
	ft_execute(argv[2], envp);
}

void	parent_proces(char **argv, char **envp, int *end)
{
	int outfile;
	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (outfile == -1)
		errors();
	dup2(end[READ_END], STDIN_FILENO);
	dup2(outfile, STDOUT_FILENO);
	close(end[WRITE_END]);
	ft_execute(argv[3], envp);
}