/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:09:47 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/13 03:26:30 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string.h"

//para el char c cambiarlo en el string pasarlo a unsigned
// void * ft_memset(void *b, int c, size_t len)
// {
// 	int i;
// 	int j;
// 	unsigned char *str;
// 	j = len;
// 	i = 0;
// 	str = (unsigned char *) b;
// 	while (str[i] && j >= 0)
// 	{
// 		str[i] = c;
// 		i++;
// 		j--;
// 	}
// 	return (str);
// }
//sustituye los len primeros bytes de b por lo que haya en c
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len--)
	{
		*str++ = (unsigned char)c;
	}
	return (b);
}

// int main (void)
// {
// 	char dest[10];
// 	char src[10] = "Hola";
// 	puts(ft_memset(src,'l',2));
// 	return (0);
// }
