/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usputnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:06:43 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/14 11:19:57 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_usputnbr_fd(unsigned int n, int fd, int count)
{
	if (n >= 10)
		count = ft_usputnbr_fd (n / 10, fd, count);
	count = ft_putchar_fd ((char)(n % 10 + '0'), fd, count);
	return (count);
}
