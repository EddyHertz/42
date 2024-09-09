/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:02:34 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/06 18:46:25 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sl(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	l;

	i = 0;
	l = ft_sl(s);
	while (s[l] != s[0])
	{
		if (s[l] == c)
			return ((char *)&s[l]);
		l--;
	}
	return (0);
}
