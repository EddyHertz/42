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

#include "get_next_line.h"
#include <stdio.h> // Alert !!!
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char	*reader(int fd)
{
	char	*txt;
	char	*buf;
	int	count;
	
	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
		if (buf == NULL)
			return (NULL);
	count = read(fd, buf, BUFFER_SIZE);
	if (count <= 0)
	{
		free(buf);
		return (NULL);
	}
	buf[count] = '\0';
	txt = buf;
	return(txt);
}
char	*get_next_line(int fd)
{
	char	*ln;

	if (fd == -1 || BUFFER_SIZE <= 0)
		return (NULL);
	ln = reader(fd);
	return (ln);
}

int main(void)
{
	int fd;
	char *line;

	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Error");
		return (-1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free (line);
	}
	close(fd);
	return (0);
}
