/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:30:05 by rocimart          #+#    #+#             */
/*   Updated: 2023/06/06 02:54:24 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

char    *ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_memchr_reverse(const void *s, int c, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
char    *ft_chrchr(const char *str, int c);
char    *ft_strchr(const char *str, int c);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*get_next_line(int fd);
char	*ft_get_line(char *sta);
char	*get_storage(int fd, char *sta);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

#endif

/*
int j = 0;
int B = BUFFER_SIZE;

read(fd, buffer, BUFFER_SIZE);
//while (buffer[i] != '\n')
//{
    while(buffer[j] != '\n' || j <= BUFFER_SIZE)
    {
        if (buffer[j] == '\n')
            break;
        else if (j == BUFFER_SIZE)
            break;
        j++;
    }
    i += j;
    free (buffer);
*/
