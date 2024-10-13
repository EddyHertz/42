/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_X.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:31:30 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/10 19:12:40 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
int	ft_X(int num, int count)
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
		char upper_c = ft_upper (hex[i]);
		count +=	write (1, &upper_c, 1);
		i++;
	}
	return (count);
}
