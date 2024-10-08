/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:31:30 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/08 16:25:34 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	negative(int num)
{
	char			hex[17];
	char			*base;
	int				i;
	unsigned int	usnum;

	usnum = (unsigned int)num;
	base = "0123456789abcdef";
	i = 15;
	hex[16] = '\0';
	while (i >= 0)
	{
		hex[i] = base[usnum % 16];
		usnum /= 16;
		i--;
	}
	i = 0;
	while (hex[i] == '0' && i < 15)
		i++;
	write(1, hex + i, 16 - i);
	return ;
}

void	ft_x(int num)
{
	char			hex[17];
	char			*base;
	int				i;

	base = "0123456789abcdef";
	i = 15;
	hex[16] = '\0';
	if (num < 0)
		negative(num);
	while (i >= 0)
	{
		hex[i] = base[num % 16];
		num /= 16;
		i--;
	}
	i = 0;
	while (hex[i] == '0' && i < 15)
		i++;
	write(1, hex + i, (16 - i));
}
