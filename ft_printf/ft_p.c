/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:31:30 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/10 13:46:33 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_null(void)
{
	write(1, "(nil)", 5);
	return(4);
}

int	ft_p(void *p, int count)
{
	unsigned long	addr;
	char			hex[17];
	char			*base;
	int				i;

	base = "0123456789abcdef";
	addr = (unsigned long)p;
	i = 15;
	hex[16] = '\0';
	count = 0;
	if (p == NULL)
		return(ft_null());
	while (i >= 0)
	{
		hex[i] = base[addr % 16];
		addr /= 16;
		i--;
	}
	i = 0;
	while (hex[i] == '0' && i < 15)
		i++;
	write(1, "0x", 2);
	count = write(1, hex + i, 16 - i);
	return (1 + count);
}
