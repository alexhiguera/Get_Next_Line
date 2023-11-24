/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:20:41 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/23 18:39:03 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//print line

char	readline(int fd, char *buf)
{
	char	*line;
	ssize_t	*bytes_read;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read = -1)
			return (NULL);
		buf = '\0';
		line = get_line(line, buf);
		if (line == NULL)
			return (NULL);
	}
	return (line);
	
}

char	*get_next_line(int fd)
{
	static char		*buffer[BUFFER_SIZE + 1];
	char			*line;
	

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = radline(fd, buf);
	return (line);
}
