/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:46:50 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/28 19:45:35 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int number)
{
	int	c;

	c = 1;
	if (number < 0)
		number = -number;
	while (number > 9)
	{
		number = number / 10;
		c++;
	}
	return (c);
}

int	ft_checkmax(int n)
{
	if (n == -2147483648)
		return (1);
	return (0);
}

char	*ft_minreturn(void)
{
	char	*r;

	r = (char *)malloc(12 * sizeof(char));
	if (r != NULL)
	{
		ft_strlcpy (r, "-2147483648", 12);
		r[11] = '\0';
	}
	return (r);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		l;
	int		sign;

	if (ft_checkmax(n) == 1)
		return (ft_minreturn());
	sign = n < 0;
	if (n < 0)
		n = -n;
	l = ft_count(n) + sign;
	r = (char *)malloc((l + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);
	r[l] = '\0';
	if (n == 0)
		r[--l] = '0';
	while (l > 0)
	{
		r[--l] = n % 10 + '0';
		n = n / 10;
	}
	if (sign)
		r[0] = '-';
	return (r);
}
/*
int	main(void)
{
	printf("Test : %s \n", ft_itoa(-1234));
	return (0);
}*/
