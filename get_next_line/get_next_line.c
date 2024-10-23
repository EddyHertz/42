/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:35:20 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/23 12:27:55 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

size_t ft_strlen(char *s)
{
	size_t i = 0;
	while (s[i] != '\0' && s[i] != '\n')
		i++;
	return (i);
}
//char	*ft_store()
char	*get_next_line(int fd)
{
	void		*buf;
	static int	cursor = 0;
	int			rreturn;
	int			i;

	i = 0;
	int BUFFER_SIZE = 5;

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return NULL;
	rreturn = read(fd, buf, BUFFER_SIZE);
	if (rreturn <= 0)
	{
		free(buf);
		return (NULL);
	}
	((char *)buf)[rreturn] = '\0';
	if (cursor > 0)
		cursor += ft_strlen((char *)buf);
	return ((char *)buf + cursor);
}

int main(void)
{
	int fd = open("text.txt", O_RDWR);
	if (fd < 0)
	{
		perror("open");
		return 1;
	}
	printf("Buffer = %s\n", get_next_line(fd));
	close(fd);
	return (0);
}

