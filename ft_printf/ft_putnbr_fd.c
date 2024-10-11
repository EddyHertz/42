/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:06:43 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/10 16:52:20 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count(int n, int count)
{
	while (n != 0)
	{
		n = n/10;
		count++;
	}
	return (count);
}

int	ft_putnbr_fd(int n, int fd, int count)
{
	int nn;

	nn = n;
	if (n == -2147483648)
	{
		ft_putchar_fd ('-', fd, 0);
		ft_putchar_fd ('2', fd, 0);
		n = 147483648;
		count = count + 1;
	}
	if (n < 0)
	{
		ft_putchar_fd ('-', fd, 0);
		n = n * -1;
		count++;
	}
	if (n > 9)
	{
		ft_putnbr_fd ((n / 10), fd, 0);
		count = count + ft_count (nn, 0);
	}
	ft_putchar_fd ((n % 10) + '0', fd, 0);
	return (count - 1);
}
