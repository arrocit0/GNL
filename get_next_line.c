/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_ai.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:23:02 by rocimart          #+#    #+#             */
/*   Updated: 2023/06/06 02:35:56 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*s;

	s = (char *)str;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

char	*get_storage(int fd, char *sta)
{
	char	*buff;
	int		r;

	buff = NULL;
	r = 1;
	if (sta == NULL)
		sta = "";
	buff = calloc(sizeof(char), BUFFER_SIZE + 1);
	if (buff == NULL)
			return (free(sta), NULL);
	while (ft_strchr(buff, '\n') == 0 && r > 0)
	{
		r = read(fd, buff, BUFFER_SIZE);
		sta = ft_strjoin(sta, buff);
		if (sta[0] == '\0')
			return (free(buff), sta);
	//	if (r == 0)
	//		return (free(sta), free(buff), NULL);
	}
	free(buff);
	return (sta);
}

char	*ft_get_line(char *sta)
{
	char	*line;
	int		i;
	int		u;

	i = 0;
	u = 0;
	while (sta[i] != '\n')
	{
		if (sta[i] == '\0')
			return (NULL);
		i++;
	}
	i += 1;
	line = calloc(sizeof(char), i + 1);
	if (line == NULL)
		return (NULL);
	while (u != i)
	{
		line[u] = sta[u];
		u++;
	}
	/*if (u )
	{
		free(sta);
		line = calloc(sizeof(char), 1);
		return(line);
	
	}*/
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*sta;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	sta = get_storage(fd, sta);
	if (sta == NULL)
		return (free(sta), NULL);
	line = ft_get_line(sta);
	if (line == NULL)
		return (NULL);
	sta = ft_chrchr(sta, '\n');
	return (line);
}

