/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:06:55 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/09 17:31:20 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
//te concatena pero te cuenta en el lengt de desto original 
//mas el len de src original(¿?)
size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	z;
	size_t	cont;

	i = ft_strlen(dest);
	z = ft_strlen(src);
	j = 0;
	if (size <= i)
	{
		return (size + z);
	}
	cont = ft_strlen(dest);
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (cont + z);
}

// int main(void)
// {
//     // printf("Result strlcpy: %s",strncpy("hola","adios",4));
//     printf("Result strlcat: %lu",strlcat"pqrstuvwxyz", "abcd", 20);
//     return (0);
// }