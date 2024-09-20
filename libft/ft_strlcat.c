/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:12:31 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/20 19:32:54 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char	*dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	i = 0;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (size <= dl)
		return (size + sl);
	while (src[i] && (i + dl) < (size - 1))
	{
		dst[i + dl] = src[i];
		i++;
	}
	dst[i + dl] = '\0';
	return (sl + dl);
}
/*
int	main(void)
{
	char dst [12] = "Hello ";
	const char *src = "42";
	size_t r = strlcat(dst, src, 3);
	printf("Standard : %zu \n Buffer : %s \n", r, dst);
	char dst2 [12] = "Hello ";
	r = ft_strlcat(dst2, src, 3);
	printf("My Function : %zu \n Buffer : %s \n", r, dst2);
	return (0);
}*/
