/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:00:24 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/09 17:32:51 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
		{
			return ((char *) s + i);
		}
		i--;
	}
	return (NULL);
}

// int main (void)
// {
// 	char *o = ft_strrchr("ltripouiel",'l');
// 	printf("%s",o);
// 	return (0);
// }