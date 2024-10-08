/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:26:01 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/24 15:24:05 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;
	unsigned char	cc;

	i = 0;
	cc = (unsigned char)c;
	ss = (unsigned char *)(s);
	while (i < n)
	{
		if (ss[i] == cc)
			return (ss + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *s = "Hello 42";
	char *r = memchr(s,'l',8);
	printf("Standard : %s \n",r);
	printf("Mine : %s", r);
	return (0);
}*/
