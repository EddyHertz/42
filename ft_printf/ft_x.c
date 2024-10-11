/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:31:30 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/10 19:12:40 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	negative(unsigned int num, int count)
{
	char			hex[17];
	char			*base;
	int				i;

	base = "0123456789abcdef";
	i = 15;
	hex[16] = '\0';
	while (i >= 0)
	{
		hex[i] = base[num % 16];
		num /= 16;
		i--;
	}
	i = 0;
	while (hex[i] == '0' && i < 15)
		i++;
	count = write(1, hex + i, 16 - i);
	return (count - 1);
}

int	ft_x(unsigned int num, int count)
{
	char			hex[17];
	char			*base;
	int				i;

	base = "0123456789abcdef";
	i = 15;
	hex[16] = '\0';
	count = (int)negative(num, 0);
	while (i >= 0)
	{
		hex[i] = base[num % 16];
		num /= 16;
		i--;
	}
	i = 0;
	while (hex[i] == '0' && i < 15)
		i++;
	count = write (1, hex + i, (16 - i));
	return (count - 1);
}