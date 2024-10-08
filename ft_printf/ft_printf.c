/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:08:22 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/08 16:44:44 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string(char c, va_list ap)

{
	if (c == '%')
		ft_putchar_fd ('%', 1);
	else if (c == 'c')
		ft_putchar_fd (va_arg(ap, int), 1);
	else if (c == 'd')
		ft_putnbr_fd (va_arg(ap, int), 1);
	else if (c == 'i')
		ft_putnbr_fd (va_arg(ap, int), 1);
	else if (c == 's')
		ft_putstr_fd (va_arg(ap, char *), 1);
	else if (c == 'u')
		ft_usputnbr_fd(va_arg(ap, unsigned int), 1);
	else if (c == 'p')
		ft_p (va_arg(ap, void *));
	else if (c == 'x' || c == 'X')
		ft_x (va_arg(ap, int));
}

void	ft_ptone(char c, va_list ap)

{
	ft_string(c, ap);
}

int	ft_printf(const char *format, ...)

{
	int		i;
	va_list	ap;

	i = 0;
	va_start (ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			ft_ptone (format[i], ap);
		}
		else
			ft_putchar_fd (format[i], 1);
		i++;
	}
	va_end (ap);
	return (0);
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
