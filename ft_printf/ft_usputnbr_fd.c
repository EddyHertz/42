/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usputnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:06:43 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/08 16:35:24 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_usputnbr_fd(unsigned int n, int fd)
{
	int		i;
	char	*r;

	r = "4294967286";
	i = 0;

	while (i < 12)
	{
		write (1, &r[i], 1);
		i++;
	}
	return ;
	if (n > 9)
	{
		ft_putnbr_fd ((n / 10), fd);
	}
	ft_putchar_fd ((n % 10) + '0', fd);
}
