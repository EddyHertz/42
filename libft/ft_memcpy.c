/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:46:14 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/10 12:29:19 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <string.h>*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (*(char *)&src[i] && i < n)
	{
		(*(char *)&dest[i]) = (*(char *)&src[i]);
		i++;
	}
	(*(char *)&dest[i]) = '\0';
	return (0);
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
