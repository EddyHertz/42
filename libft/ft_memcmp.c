/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:41:45 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/23 22:23:15 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return ((int)(ss1[i] - ss2[i]));
		i++;
	}
	return (0);
}
/*
int main(void)
{
	const char *s1 = "Hello 42";
	const char *s2 = "Hello 62";
	printf("Standard : %d \n", memcmp(s1, s2, 8));
	printf("Mine : %d", ft_memcmp(s1, s2, 8)); 
	return (0);
}*/
