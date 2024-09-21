/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:26:01 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/09/21 20:15:11 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	i = 0;
	ss = (unsigned char *)(s);
	while (i < n)
	{
		if (ss[i] == c)
			return (ss + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *s = "Hello 42";
	char *r = memchr(s,'l',8);
	printf("Standard : %s \n",r);
	printf("Mine : %s", r);
	return (0);
}*/
