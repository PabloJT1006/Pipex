/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plen_s1imenez <plen_s1imenez@student.42malaga.com    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:03:56 by plen_s1imenez          #+#    #+#             */
/*   Updated: 2023/05/19 18:08:02 by plen_s1imenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//set --> caracter a eliminar. Este caracter lo se eliminara desde el
//principio de la cadena y tambien desde el final
//(recorrerla de las dos maneras)

static int	ft_isinset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i++])
			return (1);
	}
	return (0);
}

//set deber borrar todos chars de s1 que se igual a alaguno de set en el princippio y final de s1
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*cpy;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = strlen(s1);
	k = 0;
	while (s1[i] && ft_isinset(s1[i], set))
		i++;
	//Apuntar quitar siempre el menos uno ya que el ultimo pertenece al null
	while (j > i && ft_isinset(s1[j - 1], set))
		j--;
	cpy = (char *)malloc(sizeof(char) * (j - i + 1));
	if (cpy == NULL)
		return (NULL);
	while (i < j)
	{
		cpy[k] = s1[i];
		i++;
		k++;
	}
	cpy[k] = 0;
	return (cpy);
}

// int main(void)
// {
// 	printf("%s",ft_strtrim( "lorem \n ipsum \t dolor \n sit \t amet", " "));
// }