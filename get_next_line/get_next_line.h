/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyossa-e <tyossa-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:35:20 by tyossa-e          #+#    #+#             */
/*   Updated: 2024/10/23 12:27:55 by tyossa-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE 
# define BUFFER_SIZE (5)
#endif

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

size_t  ft_strlen(const char *s);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
char    *strjoin_free(char *s1, const char *s2);
char    *reader(int fd, char *leftover);
char    *get_line(const char *leftover);
char    *trim_leftover(char *leftover);
char    *get_next_line(int fd);

#endif