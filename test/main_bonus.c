/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:18:48 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/30 15:12:12 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

#include "../src/get_next_line_bonus.h"

int	main(int argc, char **argv)
{
	int		fd1;
	int		fd2;
	char	*line;
	int		i;

	if (argc < 3)
		return (EXIT_FAILURE);
	printf("Testing files %s and %s\n", argv[1], argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		return (EXIT_FAILURE);
	fd2 = open(argv[2], O_RDONLY);
	if (fd2 == -1)
		return (close(fd1), EXIT_FAILURE);
	i = 1;
	while (i < 10)
	{
		line = get_next_line(fd1);
		if (line != NULL)
		{
			printf("Linea fichero1: %d: %s", i, line);
			free(line);
		}
		line = get_next_line(fd2);
		if (line != NULL)
		{
			printf("Linea fichero 2: %d: %s", i, line);
			free(line);
		}
		i++;
	}
	close(fd1);
	close(fd2);
	return (EXIT_SUCCESS);
}

