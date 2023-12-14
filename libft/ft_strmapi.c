/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:53 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/23 20:57:27 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ff(unsigned int i, char c)
{
	char	z;

	z = c + i;
	if (z > 102)
	{
		while (z != 102)
			z--;
	}
	if (z < 102)
	{
		while (z != 102)
			z++;
	}
	return (z);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*cpy;

	i = 0;
	len = ft_strlen(s);
	if (!s || !f)
		return (0);
	cpy = (char *)malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	while (i < len)
	{
		cpy[i] = f(i, s[i]);
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

// int main (void)
// {
// 	printf("%s",ft_strmapi("Hola",ff));
// 	return (0);
// }