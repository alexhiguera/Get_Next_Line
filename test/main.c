/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:18:48 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/24 14:10:13 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

#include "../src/get_next_line.h"

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	fd = open("prueba.txt", O_RDONLY);
	printf("%d\n", fd);
	line = get_next_line(fd);
	printf("Linea %d: %s", 1, line);
	free(line);
	close(fd);
	return (0);
}
