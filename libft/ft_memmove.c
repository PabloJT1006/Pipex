/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:09:29 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/24 21:41:59 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

typedef unsigned long	t_size;

void	*ft_memmove(void *dst, const void *src, t_size len)
{
	char	*dest_pnt;
	char	*src_pnt;
	size_t	i;

	dest_pnt = (char *)dst;
	src_pnt = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	if (dst > src)
	{
		while (len--)
			dest_pnt[len] = src_pnt[len];
	}
	else
	{
		while (i < len)
		{
			dest_pnt[i] = src_pnt[i];
			i++;
		}
	}
	return (dst);
}
// int	main(void)
// {
// 	char	dest[10] = "adios";
// 	char	src[10] = "Hola";

// 	puts(ft_memmove(dest, src, 2));
// 	return (0);
// }