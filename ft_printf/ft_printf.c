/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:08:22 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/17 14:11:32 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_string(char c, va_list ap)

{
	if (c == '%')
		return (ft_putchar_fd (c, 1, 0));
	else if (c == 'c')
		return (ft_putchar_fd (va_arg(ap, int), 1, 0));
	else if (c == 'd')
		return (ft_putnbr_fd (va_arg(ap, int), 1, 0));
	else if (c == 'i')
		return (ft_putnbr_fd (va_arg(ap, int), 1, 0));
	else if (c == 's')
		return (ft_putstr_fd (va_arg(ap, char *), 1, 0));
	else if (c == 'u')
		return (ft_usputnbr_fd (va_arg(ap, unsigned int), 1, 0));
	else if (c == 'p')
		return (ft_p (va_arg(ap, void *), 0));
	else if (c == 'x')
		return (ft_x (va_arg(ap, unsigned), 0));
	else if (c == 'X')
		return (ft_xx (va_arg(ap, unsigned), 0));
	else
	{
		ft_putchar_fd ('%', 1, 0);
		ft_putchar_fd (c, 1, 0);
		return (2);
	}
	return (0);
}

int	ft_printf(const char *format, ...)

{
	int		i;
	va_list	ap;
	int		count;

	i = 0;
	count = 0;
	if ((format == NULL ) || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
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
