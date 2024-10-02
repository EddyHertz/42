/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:46:14 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/23 18:06:15 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	if ((!s && !d) && (i < n))
		return (dest);
	while (i < n)
	{
		*d++ = *s++;
		i++;
	}
	return (dest);
}
/*
int	main()
{
	const char src[50] = "42 School Quest";
	char dest[8] = "Hello 42";
	printf("The dest now is : %s \n", dest);
	ft_memcpy(dest, src,12);
	printf("The dest after ft_memcpy : %s \n", dest);
	memcpy(dest, src, 12);
	printf("The dest after Control : %s \n", dest);
	return(0);
}*/
