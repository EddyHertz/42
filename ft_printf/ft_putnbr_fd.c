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

static int	ft_putchar_fdd(char c, int fd, int count)
{
	write(fd, &c, 1);
	return(count + 1);
}

int	ft_putnbr_fd(int n, int fd, int count)
{
	if (n == -2147483648)
	{
		count = ft_putchar_fdd ('-', fd, count);
		count = ft_putchar_fdd ('2', fd, count);
		n = 147483648;
	}
	if (n < 0)
	{
		count = ft_putchar_fdd ('-', fd, count);
		n = n * -1;
	}
	if (n >= 10)
		count = ft_putnbr_fd((n/10), fd, count);
	else if (n < 0 && n != -2147483648)
    {
        count = ft_putchar_fdd('-', fd, count);
        count = ft_putchar_fdd((char)(n + '0'), fd, count);
	}
	else
		count = ft_putchar_fdd ((char)(n + '0'), fd, count);
	return (count);
}