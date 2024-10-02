/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:18:03 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/23 19:07:36 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	r;

	r = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (r);
	while (src[i] && (i < (size - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (r);
}
/*
int	main(void)
{
	const char src [8] = "Hello 42";
	char dst [0] = "";
	size_t r;	
	r = strlcpy(dst, src, sizeof(dst));
	printf("Standard result is r : %zu \n", r);
	r = ft_strlcpy(dst, src, sizeof(dst));
	printf("My function : %zu \n", r);
	return (0);
}*/
