/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:02:34 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/23 22:22:25 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		sl;
	char	*ss;

	sl = ft_strlen(s);
	ss = (char *)s;
	while (sl >= 0)
	{
		if (ss[sl] == (char)c)
			return (ss + sl);
		sl--;
	}
	if (c == '\0')
		return (ss + sl);
	return (NULL);
}
