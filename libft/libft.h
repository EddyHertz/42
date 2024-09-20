/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:45:51 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/20 11:06:05 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unitstd.h>
#include <stdlib.h>
//std_funtions 
int		ft_strlen(const	char *s);
int		ft_isdigit(unsigned	char c);
int		ft_isalpha(unsigned	char c);
int		ft_isalnum(unsigned char c);
int		ft_isascii(unsigned char c);
int		ft_isprint(unsigned char c);
char	ft_toupper(unsigned	char c);
char	ft_tolower(unsigned	char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t	len);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
