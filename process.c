/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:46:45 by pjimenez          #+#    #+#             */
/*   Updated: 2024/01/16 14:04:22 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_child_proces(char **argv, char **envp, int *end)
{
	int	infile;

	infile = open(argv[1], O_RDONLY, 0777);
	if (infile == -1)
		ft_errors();
	dup2(infile, STDIN_FILENO);
	close(end[READ_END]);
	ft_execute(argv[2], envp, end[WRITE_END]);
}

void	ft_parent_proces(char **argv, char **envp, int *end)
{
	int	outfile;

	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (outfile == -1)
		ft_errors();
	dup2(end[READ_END], STDIN_FILENO);
	close(end[WRITE_END]);
	ft_execute(argv[3], envp, outfile);
}
