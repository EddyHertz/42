/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:45:51 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/06 18:47:45 by tyossa-e         ###   ########.fr       */
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
