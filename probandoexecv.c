/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   probandoexecv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:25:16 by pjimenez          #+#    #+#             */
/*   Updated: 2023/12/13 17:53:11 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char *find_cmd_path(char *cmd, char **envp)
{
    int     i;
    char    **paths_splited;
    char    *routes;
    char    *path;
    
    i = 0;
    while (ft_strnstr(envp[i],"PATH",4) == 0)
        i++;
    paths_splited = ft_split(envp[i] + 5,':'); //spliteamos a partir de PATH ya que las rutas estan separadas por "/"
    i = 0;
    while (paths_splited[i])
    {
        //ahora con los datos que tenemos tendremos que crear la ruta del comando en especifico para comprobar si podemos acceder a esta
        routes = ft_strjoin(paths_splited[i],"/");
        path = ft_strjoin(routes,cmd);
        free(routes);
        if (access(path,F_OK))
            return (path);
        free(path);
        i++;
    }
    i = 0;
    while (paths_splited[i++])
        free(paths_splited[i]);
    free(paths_splited);
    return(0);
}

void    ft_execute(char *argv, char **envp)
{
    char    **cmd;
    char    *path;
    int     i;

    i = 0;

    cmd = ft_split(argv,' ');
    while (cmd[i])
    {
        printf("%s\n",cmd[i]);
        i++;
    }
    
    path = find_cmd_path(cmd[0],envp); 
    execve(path,cmd,envp);
    if (!path)
    {
        while (cmd[i++])
            free(cmd[i]);
        free(cmd);
        //añadir mensaje de error
    }


}