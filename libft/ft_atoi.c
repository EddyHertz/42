/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:42:55 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/21 17:35:54 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	r;

	i = 0;
	sign = 0;
	r = 0;
	if (nptr[i] == '\0')
		return (0);
	while ((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign++;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		r = r * 10 + nptr[i] - '0';
		i++;
	}
	if (sign % 2 == 0)
		return (r);
	return (r * -1);
}
/*
int	main(void)
{
	char src[] = "  ---+--1234";
	printf("Result of funtion : %d \n",ft_atoi(src));
	return (0);
}*/
