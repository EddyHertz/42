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
		count++;
		if (format[i] == '%')
		{
			i++;
			count = count + ft_string (format[i], ap);
		}
		else
			ft_putchar_fd (format[i], 1, 0);
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
	unsigned int	j = -678;
	void			*p = "123";
	i = 10;
	ft_printf("Mine -> d: %d s: %s c: %c per: %% u: %u \n", i, "Hi", 'H', i);
	printf("Cont -> d: %d s: %s c: %c per: %% u: %u \n", i, "Hi", 'H', i);
	ft_printf("Mine 2 -> p: %p x: %x X: %X \n", p, j, j);
	printf("Cont 2 -> p: %p x: %x X: %X \n", p, j, j);
	return (0);
}
*/
