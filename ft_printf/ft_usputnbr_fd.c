/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usputnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:06:43 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/10 17:33:54 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uscount(unsigned int n, int count)
{
	while (n != 0)
	{
		n = n/10;
		count++;
	}
	return (count);
}

int	ft_usputnbr_fd(unsigned int n, int fd, int count)
{
	unsigned int		nn;
	nn = n;
	if (n > 9)
	{
		ft_putnbr_fd ((n / 10), fd, 0);
		count = ft_uscount (nn, 0) - 1;
	}
	ft_putchar_fd ((n % 10) + '0', fd, 1);
	return (count);
}
