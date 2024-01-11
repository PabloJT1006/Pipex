/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:47:06 by pjimenez          #+#    #+#             */
/*   Updated: 2024/01/11 11:45:58 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv,  char **envp)
{
    int end[2];
    pid_t pid;
    
    pipe(end); //hacemos que hallan dos procesos que se comuniquen entre si
    
     //Para identificar los procesos hijo -> ejecuta algo, padre -> coge ese algo para ejecutar otra cosa
    if (argc == 5)
    {
        if (pipe(end) == -1)
            errors();
        pid = fork();
        if (pid < 0)
            errors();
        if (pid == 0)
            child_proces(argv,envp,end);
        waitpid(pid,NULL,0);
        parent_proces(argv,envp,end);
        
    }
    else
	{
		ft_printf("Pipex_Error: Bad arguments\n");
		ft_printf("Example: ./pipex <file1> <cmd1> <cmd2> <file2>\n");
	}
    return (0);
}
    
