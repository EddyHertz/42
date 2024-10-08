/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:55:27 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/08 16:39:23 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_usputnbr_fd(unsigned int n, int fd);
void	ft_p(void *p);
void	ft_x(int num);
size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);

#endif
