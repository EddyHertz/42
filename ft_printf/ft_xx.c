/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:31:30 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/14 11:40:38 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_upper(char c, int count)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	count += write (1, &c, 1);
	return (count);
}

int	ft_xx(int num, int count)
{
	char			hex[17];
	char			*base;
	int				i;
	unsigned int	usnum;

	base = "0123456789abcdef";
	i = 15;
	hex[16] = '\0';
	usnum = (unsigned int)num;
	while (i >= 0)
	{
		hex[i] = base[usnum % 16];
		usnum /= 16;
		i--;
	}
	i = 0;
	while (hex[i] == '0' && i < 15)
		i++;
	while (hex[i])
	{
		count += ft_upper ((hex[i]), count);
		i++;
	}
	return (count);
}
