/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:29:53 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/25 17:54:19 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	char		*ss;

	i = ft_strlen(s1) + ft_strlen(s2);
	ss = (char *)malloc((i + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		ss[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		ss[i] = s2[j];
		j++;
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
/*
#include <stdio.h>

int	main(void)
{
	const char *s1 = "Hello Wolrd";
	const char *s2 = "ready for Zombies";
	printf("The result is : %s \n", ft_strjoin(s1, s2));
	return (0);
}*/
