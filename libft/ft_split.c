/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:42:38 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/02 14:52:26 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	skip_delimiters(const char *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

int	count_substrings(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		i = skip_delimiters(s, c, i);
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	*allocate_substring(const char *s, int start, int end)
{
	char	*substring;
	int		len;
	int		j;

	len = end - start;
	j = 0;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	while (start < end)
		substring[j++] = s[start++];
	substring[j] = '\0';
	return (substring);
}

int	fill_substrings(char **result, const char *s, char c)
{
	int	i;
	int	start;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		i = skip_delimiters(s, c, i);
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[j] = allocate_substring(s, start, i);
			if (!result[j])
				return (0);
			j++;
		}
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		ss_count;
	int		i;

	if (!s)
		return (NULL);
	ss_count = count_substrings(s, c);
	result = (char **)malloc((ss_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (!fill_substrings(result, s, c))
	{
		i = 0;
		while (result[i])
		{
			free (result[i]);
			i++;
		}
		free (result);
		return (NULL);
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char	ar[] = "Mon,Tues,Wed,hello,,,,hi,,/3/4,";
	char	c = ',';
	int		i;

	i = 0;
	char	**r = ft_split(ar,c);
	while(r && *r != NULL)
	{
		printf("%s \n", *r);
		r++;
	}
	return (0);
}*/
