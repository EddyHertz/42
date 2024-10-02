/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:06:14 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/27 12:38:28 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ss;
	char			*sc;

	i = 0;
	sc = (char *)s;
	ss = (char *)malloc((ft_strlen(sc) + 1) * sizeof(char));
	if (ss == NULL)
		return (NULL);
	while (sc[i])
	{
		ss[i] = f(i, sc[i]);
		i++;
	}
	ss[i] = '\0';
	return (ss);
}
