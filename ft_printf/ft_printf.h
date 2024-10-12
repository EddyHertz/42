/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:55:27 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/10 19:10:32 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_putstr_fd(char *s, int fd, int count);
int		ft_putnbr_fd(int n, int fd, int count);
int		ft_usputnbr_fd(unsigned int n, int fd, int count);
int		ft_p(void *p, int count);
int		ft_x(int num, int count);
size_t	ft_strlen(const char *s);
int     ft_putchar_fd(char c, int fd, int count);

#endif
