/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:20:41 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/24 14:10:41 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//print line
char	*get_line(char *line, char *buffer)
{
	char	*result;
	size_t	line_len;
	size_t	buf_len;

	line_len = gn_strlen(line);
	buf_len = gn_strlen(buffer);
	result = (char *)malloc(sizeof(char) * (line_len + buf_len + 1));
	if (result == NULL)
		return (NULL);
	gn_strncpy(result, line, line_len);
	gn_strncpy(result + line_len, buffer, buf_len);
	result[line_len + buf_len] = '\0';
	return (result);
}

char	*readline(int fd, char *buffer)
{
	char	*line;
	ssize_t	bytes_read;

	line = NULL;
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (NULL);
		buffer[bytes_read] = '\0';
		line = get_line(line, buffer);
		if (line == NULL)
			return (NULL);
	}
	return (line);
}

char	*get_next_line(int fd)
{
	static char		buffer[BUFFER_SIZE + 1];
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = readline(fd, buffer);
	return (line);
}
