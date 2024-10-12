/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:08:22 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/10 19:09:14 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char c, va_list ap)

{
	if (c == '%')
		return (ft_putchar_fd ('%', 1, 0));
	else if (c == 'c')
		return (ft_putchar_fd (va_arg(ap, int), 1, 0));
	else if (c == 'd')
		return (ft_putnbr_fd (va_arg(ap, int), 1, 0));
	else if (c == 'i')
		return (ft_putnbr_fd (va_arg(ap, int), 1, 0));
	else if (c == 's')
		return (ft_putstr_fd (va_arg(ap, char *), 1, 0));
	else if (c == 'u')
		return (ft_usputnbr_fd(va_arg(ap, unsigned int), 1, 0));
	else if (c == 'p')
		return (ft_p (va_arg(ap, void *), 0));
	else if (c == 'x' || c == 'X')
		return (ft_x (va_arg(ap, unsigned), 0));
	return (0);
}

int	ft_printf(const char *format, ...)

{
	int		i;
	va_list	ap;
	int	count = 0;
	i = 0;
	va_start (ap, format);
	while (format[i] != '\0')
	{
		
		if (format[i] == '%')
		{
			i++;
			count = count + ft_string (format[i], ap);
		}
		else
		{
			ft_putchar_fd (format[i], 1, 0);
			count++;
		}
		i++;
	}
	va_end (ap);
	return (count);
}
/*
#include <stdio.h>

int	main(void)

{
	int	i;
	int c_ft;
	int c_p;
	i = 0;
	c_ft = ft_printf("Mine -> u: %d \n", i);
	c_p = printf("Cont -> u: %d \n", i);
	printf("Count mine -> u: %d \n", c_ft);
	printf("Count Cont -> u: %d \n", c_p);
	return (0);
}
*/
