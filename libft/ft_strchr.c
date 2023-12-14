/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 22:09:24 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/27 01:57:22 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strchr(char *s, int c)
{
	while (*s != (char) c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return ((char *) s);
}

// int main (void)
// {
// 	printf("%s",ft_strchr("hola",'o'));
// }
