/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:19:27 by rocimart          #+#    #+#             */
/*   Updated: 2023/06/06 02:54:45 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	main(void)
{
	int 	fd = open("nl.txt", O_RDWR);
	char	*s;

	while ((s = get_next_line(fd)))
	{
		printf("%s", s);
		free(s);
	}
	printf("%s", get_next_line(fd));
	close(fd);
//	system("leaks a.out");
	return (0);
}
