/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:29:23 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/23 23:22:52 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

// int main (void)
// {
//     int fd1;
//     char *hola;

//     hola = "hola";
//     //1 archivo, 2 la forma en la que se abre, 3 los permises del archivo
//     fd1 = open("archivo.txt", O_CREAT | O_WRONLY, 0644);
//     //-1 uno es que ha habido problemas al abrir el archivo
//     if (fd1 == -1)
//     {
//         perror("nope");
//     }
//     while (*hola != '\0')
//     {
//         ft_putchar_fd(*hola++,fd1);
//     }
//     close(fd1);
//     return (0);
// }
