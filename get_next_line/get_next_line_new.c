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
#include <stdio.h> // Remove Later !!
#include <string.h>

char *strjoin_free(char *s1, const char *s2)
{
    size_t len1 = s1 ? ft_strlen(s1) : 0;
    size_t len2 = ft_strlen(s2);
    char *joined = malloc((len1 + len2 + 1) * sizeof(char));
    if (!joined) return NULL;
    
    if (s1) strcpy(joined, s1);
    strcpy(joined + len1, s2);
    free(s1);
    return joined;
}

char *reader(int fd, char *leftover)
{
    ssize_t count;
    char *buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
    if (!buf)
        return NULL;
    if (!leftover)
        leftover = strdup("");
    if (!leftover) 
    { 
        free(buf); 
        return NULL;
    }
    while (!strchr(leftover, '\n') && (count = read(fd, buf, BUFFER_SIZE)) > 0) 
    {
        buf[count] = '\0'; 
        leftover = strjoin_free(leftover, buf);
        if (!leftover) break;
    }
    free(buf);
    return (count < 0 ? NULL : leftover);
}

char *get_line(const char *leftover)
{
    size_t i = 0;
    while (leftover[i] && leftover[i] != '\n') i++;

    char *line = malloc((i + (leftover[i] == '\n' ? 2 : 1)) * sizeof(char));
    if (!line) return NULL;

    strncpy(line, leftover, i);
    line[i] = leftover[i] == '\n' ? '\n' : '\0';
    line[i + (leftover[i] == '\n' ? 1 : 0)] = '\0';
    return line;
}

char *trim_leftover(char *leftover)
{
    char *newline = strchr(leftover, '\n'); 
    if (!newline) 
    { 
        free(leftover);
        return NULL;
    }
    char *new_leftover = strdup(newline + 1);
    free(leftover);
    return new_leftover;
}

char *get_next_line(int fd)
{
    static char *leftover;
    if (fd < 0 || BUFFER_SIZE <= 0) return NULL;

    leftover = reader(fd, leftover); 
    if (!leftover) return NULL; 

    char *line = get_line(leftover); 
    leftover = trim_leftover(leftover); 

    if (!leftover && !line[0]) 
    {
        free(line); 
        return NULL; 
    }
    return line;
}

int main(void)
{
    int fd = open("text.txt", O_RDONLY);
    if (fd < 0) 
    { 
        perror("Error opening file");
        return 1;
    }

    char *line;
    while ((line = get_next_line(fd)) != NULL) 
    {
        printf("%s", line);
        free(line);
    }
    close(fd);
    return 0;
}
