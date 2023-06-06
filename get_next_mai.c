/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:35:22 by rocimart          #+#    #+#             */
/*   Updated: 2023/04/23 14:22:38 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	get_next_line(int fd)
{
//	char	buff[BUFFER_SIZE + 1];
//	char	*bf;
//	int		r;
	
	//bf = ft_memchr_reverse(buff, '\n', BUFFER_SIZE);
	//sta = bf;
	//printf("%s\n", bf);
//	r = 0;
//	if (strchr(buff, '\n') == 0)
//		r = read(fd, buff, BUFFER_SIZE);
//	bf = ft_memchr_reverse(buff, '\n', BUFFER_SIZE);
//	printf("bf\t%zu\t%s\n", ft_strlen(bf), bf);
//	sta = ft_strjoin(sta, buff);
//	sta = ft_substr(sta, strlen(bf), BUFFER_SIZE);
//	printf("%s\n_______\n", sta);
//	printf("%s\n", bf);
//	printf("%d\n", r);
	int			i;
	int			r;
	char		*buff;
	static char	*sta;

	i = 0;
	buff = malloc(sizeof(char *) * BUFFER_SIZE + 1);
	while(ft_strchr(buff, '\n') == 0 && r > 0)
	{
		r = read(fd, buff, BUFFER_SIZE);
		sta = ft_strjoin(sta, buff);
		printf("1 -> %s\n", sta);
	}
    sta = ft_chrchr(sta, '\n');
		printf("2 -> \t%s\n", sta);
}

int	main(void)
{
	int fd = open("corte.txt", O_RDWR);

	get_next_line(fd);
	get_next_line(fd);
	get_next_line(fd);

//	printf("%s", get_next_line(fd));
//	printf("%s", get_next_line(fd));
//	printf("%s", get_next_line(fd));
}
