/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:47:06 by pjimenez          #+#    #+#             */
/*   Updated: 2023/12/19 13:56:20 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"



// int main(int argc, char **argv,  char **envp)
// {
//     int end[2];
//     int outfile;
//     int fd;
//     pid_t pid, pid2;
    
//     pipe(end); //hacemos que hallan dos procesos que se comuniquen entre si
    
//     pid = fork(); //Para identificar los procesos hijo -> ejecuta algo, padre -> coge ese algo para ejecutar otra cosa
//     printf("%d\n",pid);
//     if (argc)
//     {
//         if (pid < 0)
//         {
//             return 0;
//         }
        
//         if (pid == 0)
//         {
            
//             int infile = open(argv[1],O_RDONLY);
//             dup2(end[WRITE_END],STDOUT_FILENO);
//             dup2(infile,STDOUT_FILENO);
//             close(end[READ_END]);
//             close(infile);
//             ft_execute(argv[2],envp);
//         }
//         else
//         {
//             int outfile = open(argv[4],O_WRONLY | O_CREAT | 0777);
//             dup2(end[READ_END],STDIN_FILENO);
//             dup2(outfile,STDOUT_FILENO);
            
//             close(end[WRITE_END]);         
//             ft_execute(argv[3],envp);
//         }
//         close(end[READ_END]);            
//         close(end[WRITE_END]);            
//         waitpid(pid,NULL,0);
//         waitpid(pid,NULL,0);
//     }
//     return (0);
// }
int main(int argc, char **argv,  char **envp)
{
    int end[2];
    pid_t pid;
    
    pipe(end); //hacemos que hallan dos procesos que se comuniquen entre si
    
    pid = fork(); //Para identificar los procesos hijo -> ejecuta algo, padre -> coge ese algo para ejecutar otra cosa
    if (argc == 5)
    {
        if (pid < 0)
            return 1;
        if (pid == 0)
            child_proces(argv,envp,end);
        else
            waitpid(pid,NULL,0);
            parent_proces(argv,envp,end);
    }
    return (0);
}
    
