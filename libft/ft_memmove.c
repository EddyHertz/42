/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:31:53 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/24 13:36:48 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	if ((!d && !s) && (i <= n))
		return (NULL);
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	while (i < n && d < s)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	char		dst [5] = "hertz";
	const char	src [11] = "Hi i'm eddy";
	
	ft_memmove(dst, src, 4);
	printf("New string : %s \n", dst);
	return(0);
}*/
