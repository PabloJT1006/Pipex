/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:21:28 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/22 19:22:35 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
//primero se compruba que sea negativo y si lo es incrementamos en un o el cont
//para que asi el len final solo sea el de las cifras sin contar el signo
// la cantidad de digitos sera la cantidad de veces que el numero puede 
//dividirse entre 0
//poner el iguial a cero ya que si es cero no incremente el contadro
//por lo tanto no no alloca nada con el 0 (me cago en su puta madre)
int nlength(int n)
{
	int	cont;

	cont = 0;
    if (n <= 0)
    {
		cont++;
    }
    while (n != 0)
	{
		n /= 10;
		cont++;
	}
	return(cont);   
}

//para separar un numero en digitos siempre se empieza desde las unidades
//por lo que habra que recorrer el str inversamente
//apuntar que para hacer parse a un varibale no la puedo iguralar a ella misma
char *ft_itoa(int n)
{
    char	*str;
	size_t	len;
	long	ln;
	
	ln = (long) n;
	len = nlength(ln);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (ln == 0)
		str[0] = '0';
	if (ln < 0)
	{
		str[0] = '-';
		ln *= -1;
	}
	while (ln > 0)
	{
		str[len] = (ln % 10) + '0';
		ln /= 10;
		len--;
	}
	return (str);
}

// int main (void)
// {
// 	printf("%s", ft_itoa(-2147483647 -1));
// }