/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:46:45 by pjimenez          #+#    #+#             */
/*   Updated: 2024/02/02 16:52:45 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_child_proces(char **argv, char **envp, int *end)
{
	int	infile;

	infile = open(argv[1], O_RDONLY, 0777);
	if (infile == -1)
		error_file(argv[1]);
	dup2(end[WRITE_END], STDOUT_FILENO);
	dup2(infile, STDIN_FILENO);
	close(end[READ_END]);
	if (ft_strlen(argv[2]) == 0)
		ft_error_perm();
	else if (all_spaces(argv[2]))
		error_cmd(argv[2]);
	ft_execute(argv[2], envp, end[WRITE_END]);
}

void	ft_parent_proces(char **argv, char **envp, int *end)
{
	int	outfile;

	outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (outfile == -1)
		error_file(argv[4]);
	dup2(end[READ_END], STDIN_FILENO);
	dup2(outfile, STDOUT_FILENO);
	if (ft_strlen(argv[3]) == 0)
		ft_error_perm();
	close(end[WRITE_END]);
	if (all_spaces(argv[3]))
		error_cmd(argv[3]);
	ft_execute(argv[3], envp, outfile);
}
