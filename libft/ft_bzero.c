/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:14:18 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/04 23:44:50 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*src;
	int				i;

	i = 0;
	src = (unsigned char *) s;
	while (n--)
	{
		src[i] = 0;
		i++;
	}
}
// int main ()
// {
//      char str[50];

//      strcpy(str,"This is string.h library function");
//      puts(str);

//      bzero(str,1);
//      puts(str);

//      return(0);
// }