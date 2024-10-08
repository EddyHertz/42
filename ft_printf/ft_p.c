/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:31:30 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/08 15:40:35 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p(void *p)
{
	unsigned long	addr;
	char			hex[17];
	char			*base;
	int				i;

	base = "0123456789abcdef";
	addr = (unsigned long)p;
	i = 15;
	hex[16] = '\0';
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
	write(1, hex + i, 16 - i);
}
