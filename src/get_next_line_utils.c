/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:48:11 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/27 15:22:38 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gn_strlen(char *str)
{
	size_t	len;

	if (str == NULL)
		return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	gn_strncpy(char *result, char *orin, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && orin[i] != '\0')
	{
		result[i] = orin[i];
		i++;
	}
	result[len] = '\0';
}

void	gn_free(char *fres)
{
	if (fres != NULL)
		free (fres);
}

char	gn_strchr(char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
