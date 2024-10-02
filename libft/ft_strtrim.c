/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 21:04:16 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/01 21:28:14 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_istrim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_trimsize(char const *s1, char const *set)
{
	int	size;

	size = ft_strlen(s1);
	while (size > 0 && ft_istrim(s1[size - 1], set))
		size--;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		trimmed_size;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_istrim(s1[start], set))
		start++;
	trimmed_size = ft_trimsize(s1 + start, set);
	result = (char *)malloc((trimmed_size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, trimmed_size + 1);
	return (result);
}
