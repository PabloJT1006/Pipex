/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:59:12 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/24 17:32:37 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
    //fd --> donde mandas el output, lo mandado , tamnyioo de lo mandado
    write(fd,s,ft_strlen(s));   
}

// int main (void)
// {
//     int fd1;
    
//     fd1 = open("archivo2.txt",  O_CREAT | O_WRONLY, 0777);
    
//     if (fd1 == -1)
//         printf("salia");
    
//     ft_putstr_fd("Comeme el huevo derecho",fd1);
//     close(fd1);
//     return (0);
// }
