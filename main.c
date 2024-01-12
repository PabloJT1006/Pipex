/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:47:06 by pjimenez          #+#    #+#             */
/*   Updated: 2024/01/11 16:59:21 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

// void ft_leaks()
// {
// 	system("leaks pipex");
// }


int	main(int argc, char **argv, char **envp)
{
	int		end[2];
	pid_t	pid;

	pipe(end);
    // atexit(ft_leaks);
	if (argc == 5)
	{
		if (pipe(end) == -1)
			errors();
		pid = fork();
		if (pid < 0)
			errors();
		if (pid == 0)
			child_proces(argv, envp, end);
		waitpid(pid, NULL, 0);
		parent_proces(argv, envp, end);
	}
	else
	{
		ft_printf("Error: Bad arguments\n");
		ft_printf("Example: ./pipex <file1> <cmd1> <cmd2> <file2>\n");
	}
	return (0);
}
