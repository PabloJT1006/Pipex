/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:09:16 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/05 13:30:34 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//concadena en dst los n bytes de src, en el caso de que las dos cadenas esten 
//vacias o null, devolvera un null
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*sorc;
	unsigned char		*dest;

	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	dest = (unsigned char *)dst;
	sorc = (const unsigned char *)src;
	while (n--)
	{
		*dest++ = *sorc++;
	}
	return (dst);
}
// int main (void)
// {
// 	char dest[10];
// 	char src[10];
// 	puts(ft_memcpy(NULL, NULL,0));
// 	return (0);
// }