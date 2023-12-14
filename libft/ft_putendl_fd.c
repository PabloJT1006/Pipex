/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:25:00 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/24 16:56:22 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
//escribir en un txt lo pasado por parametro pero anyiadiendo un salto de linea
//una vez se haya terminado de recorrer el str
void ft_putendl_fd(char *s, int fd)
{
    //fd --> donde mandas el output, lo mandado , tamnyioo de lo mandado
    write(fd,s,ft_strlen(s)); 
    write(fd,"\n",1);
}
