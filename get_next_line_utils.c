/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:31:02 by rocimart          #+#    #+#             */
/*   Updated: 2023/06/06 01:25:11 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*char	*ft_memchr_reverse(const void *s, int c, size_t n)
{
	unsigned char	*str;
	char			*buff;
	size_t			i;
	size_t			u;

	str = (unsigned char *)s;
	i = 0;
	u = 0;
	while (i != n)
	{
		if (str[i] == (unsigned char)c)
		{
			buff = calloc(sizeof(char *), i);
			if (buff == NULL)
				return (NULL);
//			buff = ft_substr((const char *)str, (unsigned int)a, (size_t)i);
			while (u != i)
			{
				buff[u] = str[u];
				u++;
			}
			if (u == i)
				return ((char *)buff);
		}
		i++;
	}
	return (NULL);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	size_t	s_len;
	char	*m;

	i = 0;
	/*if (s2 == NULL)
	{
		m = calloc(sizeof(char), 1);
		return (m);
	}*/
	s_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	m = calloc(sizeof(char), s_len);
	if (m == NULL)
		return (NULL);
	ft_memmove(m, s1, ft_strlen(s1) + 1);
	ft_strlcat(m, s2, s_len);
	return (m);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sou;
	size_t	j;

	dest = (char *)dst;
	sou = (char *)src;
	j = 0;
	if (dest > sou)
		while (len--)
			dest[len] = sou[len];
	else
	{
		while (j < len && (dest || sou))
		{
			dest[j] = sou[j];
			j++;
		}
	}
	return (dest);
}

static size_t	ft_strllen(char *str, size_t size)
{
	size_t	i;

	i = 0;
	while (str[i] && i < size)
		++i;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t			dest_len;
	size_t			src_len;
	unsigned int	i;
	unsigned int	u;

	dest_len = ft_strllen(dest, size);
	src_len = ft_strlen(src);
	i = 0;
	u = 0;
	if (size <= dest_len)
		return (size + src_len);
	while (dest[i] != 0)
		i++;
	while (src[u] != 0 && (u < size - dest_len - 1))
	{
		dest[i] = src[u];
		u++;
		i++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;
	char	*s;

	s = (char *)str;
	i = 0;
	while (s[i])
		i++;
	//printf("**********\n\t%lu\n*\n", i);
	return (i);
}

char    *ft_chrchr(const char *str, int c)
{
    int     i;
    char    *s;

    i = 0;
    s = (char *)str;
	if (s == NULL)
		return (NULL);
    while (s[i])
    {
//        if (s[i] == (char)c && (i % 2 == 0))
 //           return (&s[i]);
		if (s[i] == (char)c)
			return (&s[i + 1]);
        i++;
    }
    return (NULL);
}
