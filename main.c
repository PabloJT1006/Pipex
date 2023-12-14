/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:47:06 by pjimenez          #+#    #+#             */
/*   Updated: 2023/12/14 17:03:51 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"



int main(int argc, char **argv,  char **envp)
{
    int end[2];
    int outfile;
    int fd;
    pid_t pid, pid2;
    
    pipe(end); //hacemos que hallan dos procesos que se comuniquen entre si
    
    pid = fork(); //Para identificar los procesos hijo -> ejecuta algo, padre -> coge ese algo para ejecutar otra cosa
    printf("%d\n",pid);
    if (argc)
    {
        if (pid < 0)
        {
            return 0;
        }
        
        if (pid == 0)
        {
            
            printf("Antes de stdout \n");
            dup2(end[WRITE_END],STDERR_FILENO);
            printf("despues de stdout \n");
            close(end[READ_END]);
            close(end[WRITE_END]);
            ft_execute(argv[1],envp);
        }
        
        pid2 = fork();
        if (pid2 < 0)
        {
            return 0;
        }
        if (pid2 == 0)
        {
            dup2(end[READ_END],STDIN_FILENO);
            close(end[READ_END]);
            close(end[WRITE_END]);            
            ft_execute(argv[2],envp);
        }
        close(end[READ_END]);            
        close(end[WRITE_END]);            
        waitpid(pid,NULL,0);
        waitpid(pid2,NULL,0);
    }
    return (0);
}
    
