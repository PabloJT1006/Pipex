/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 22:10:47 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/26 14:10:04 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//si no hay nada que buscar devolvermos str 
//en el caso que si recorremos hasta que se llegue al final de str 
//y hasta que len se acabe
//despues recorremos mientrar la poscion de j en find sea la misma que la
//poscion i + j en str y mientras la posicion el indice
// i + j (posicion de los char de find en str) sea menor que len introducido
// si la poscion de j siguiente es el final de cadena de de find devolvemos
// el trozo de cadena de str
char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*find)
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == find[j] && i + j < len)
			if (find[++j] == '\0')
				return ((char *)str + i);
		i++;
	}
	return (0);
}

// int main (void)
// {
//     int i = 0;
// 	while (i < 15)
// 	{
// 		printf("%s", ft_strnstr("hola buenos dias","buenos",i));
// 		printf("\n");
// 		i++;
// 	}
//     return (0);
// }
