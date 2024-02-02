/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:47:06 by pjimenez          #+#    #+#             */
/*   Updated: 2024/02/02 16:23:50 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	int		end[2];
	pid_t	pid;

	pipe(end);
	if (argc == 5)
	{
		if (pipe(end) == -1)
			ft_error("Pipe error");
		pid = fork();
		if (pid == -1)
			ft_error("Fork error");
		if (pid == 0)
			ft_child_proces(argv, envp, end);
		else
			ft_parent_proces(argv, envp, end);
		waitpid(pid, NULL, 0);
	}
	else
	{
		ft_printf("Error: Bad arguments\n");
		ft_printf("Example: ./pipex <file1> <cmd1> <cmd2> <file2>\n");
	}
	return (0);
}
