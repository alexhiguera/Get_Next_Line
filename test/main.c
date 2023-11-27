/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:18:48 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/27 15:35:17 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

#include "../src/get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;
	int		i;

	if (argc < 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	i = 1;
	fd = open("prueba.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("Linea %d: %s", i, line);
		free(line);
		i++;
	}
	close(fd);
	return (0);
}
