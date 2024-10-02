/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:18:42 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/01 20:11:12 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = NULL;
	if (nmemb != 0 && size > __SIZE_MAX__ / nmemb)
		return (NULL);
	if (size == 0 || nmemb == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/* L19 f either nmemb (number of elements) or size (size of each element)
is zero, calloc should return a non-null pointer that
can be safely passed to free.*/
