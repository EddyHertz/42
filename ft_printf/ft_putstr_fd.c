/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:02:40 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/10 13:15:09 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd, int count)
{
	size_t	i;

	i = 0;
	if (s == NULL)
	{
		write(fd, "(null)", 6);
		count = 6;
	}
	else
	{
		count = ft_strlen(s);
		while (i < ft_strlen(s))
		{
			write (fd, &s[i], 1);
			i++;
		}
	}
	return (count);
}
