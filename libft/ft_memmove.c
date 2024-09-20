/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:31:53 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/20 11:05:03 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (d >= s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			*d++ = *s++;
			i++;
		}
	}
	return (d);
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
