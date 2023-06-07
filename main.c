/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rocimart <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:19:27 by rocimart          #+#    #+#             */
/*   Updated: 2023/06/07 19:19:10 by rocimart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

int	main(void)
{
	int 	fd = open("only_nl.txt", O_RDWR);
	
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
