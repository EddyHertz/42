/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:35:20 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/31 16:42:43 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char *strjoin_free(char *s1, const char *s2)
{
	char	*joined;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = ft_strlen (s1);
	len2 = ft_strlen (s2);
	joined = malloc ((len1 + len2 + 1) * sizeof(char));
	if (!joined)
<<<<<<< HEAD
		return (free(joined), NULL);
=======
		return (free (joined), NULL);
>>>>>>> refs/remotes/origin/main
	if (s1)
		ft_strcpy (joined, s1);
	ft_strcpy (joined + len1, (char *)s2);
	free (s1);
	return (joined);
}

char *reader(int fd, char *leftover)
{
	ssize_t	count;
	char	*buf;

	count = 1;
	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (free (buf), NULL);
    if (!leftover)
		leftover = ft_strdup ("");
	// if (!leftover)
	// {
	// 	free(buf);
	// 	return (NULL);
	// }
	while (!ft_strchr(leftover, '\n') && (count > 0))
	{
		count = read(fd, buf, BUFFER_SIZE);
		buf[count] = '\0';
		leftover = strjoin_free (leftover, buf);
		if (!leftover)
<<<<<<< HEAD
			break;
=======
			return (free (buf), NULL); //break;
>>>>>>> refs/remotes/origin/main
	}
	free (buf);
	if (count < 0)
		return (NULL);
	return (leftover);
}

char *get_ln(const char *leftover)
{
	char	*line;
	size_t	i;

	i = 0;
	while (leftover[i] && leftover[i] != '\n')
		i++;
	if (leftover[i] == '\n')
		line = malloc((i + 2) * sizeof(char));
	else
		line = malloc((i + 1) * sizeof(char));
	if (!line)
		return (NULL);
	ft_strncpy (line, (char *)leftover, i);
	if (leftover[i] == '\n')
	{
		line[i] = '\n';
		line[i + 1] = '\0';
	}
	else
		line[i] = '\0';
	return (line);
}

char *trim_leftover(char *leftover)
{
	char	*new_leftover;
	char	*newline;

	newline = ft_strchr (leftover, '\n');
	if (!newline)
	{
		free (leftover);
		return (NULL);
	}
	new_leftover = ft_strdup (newline + 1);
	free (leftover);
	return (new_leftover);
}

char *get_next_line(int fd)
{
	static char	*leftover;
	char		*line;

<<<<<<< HEAD
	if (fd < 0 || BUFFER_SIZE <= 0)
=======
	if ((fd < 0) || (BUFFER_SIZE <= 0))
>>>>>>> refs/remotes/origin/main
		return (NULL);
	leftover = reader (fd, leftover);
	if (!leftover)
		return (NULL);
	line = get_ln (leftover);
	leftover = trim_leftover (leftover);
	if (!leftover) //&& !*line)
	{
		free (line);
		return (free (leftover), NULL);
	}
	return (line);
}

<<<<<<< HEAD
int main(void)
{
	int		fd;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
	{
		perror("Error opening file");
		return 1;
	}
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			return (free(line), 0);
		printf ("%s", line);
		free (line);
	}
	close (fd);
	return 0;
}
=======
// int main(void)
// {
// 	int		fd;
// 	char	*line;
>>>>>>> refs/remotes/origin/main

// 	fd = open("text.txt", O_RDONLY);
// 	if (fd < 0)
// 	{
// 		perror("Error opening file");
// 		return 1;
// 	}
// 	while ((line = get_next_line(fd)) != NULL)
// 	{
// 		printf ("%s", line);
// 		free (line);
// 	}
// 	close (fd);
// 	return 0;
// }
