/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjimenez <pjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:57:25 by pjimenez          #+#    #+#             */
/*   Updated: 2023/05/30 14:39:16 by pjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-',fd);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd((n / 10),fd);
		ft_putnbr_fd((n % 10),fd);
	}
	else
	{
		ft_putchar_fd(n + '0',fd);
	}
}

// int main(void)
// {
// 	int fd;

// 	fd = open("nums.txt", O_CREAT | O_WRONLY, 0777);

// 	if (fd == -1)
// 	{
// 		printf("sa liao");
// 	}

// 	ft_putnr_fd(12345,fd);
// 	close(fd);
// 	return (0);
// }