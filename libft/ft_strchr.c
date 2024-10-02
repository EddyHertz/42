/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 14:11:08 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/24 14:14:42 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ss;

	ss = (char *)s;
	while (*ss)
	{
		if (*ss == (char)c)
			return (ss);
		ss++;
	}
	if (c == '\0' || (unsigned char)c == 0)
		return (ss);
	return (NULL);
}
