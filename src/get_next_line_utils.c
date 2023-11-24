/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahiguera <ahiguera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:48:11 by ahiguera          #+#    #+#             */
/*   Updated: 2023/11/23 18:20:11 by ahiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	gn_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*gn_strdup(char *str)
{
	size_t	i;
	size_t	len;
	char	*dup;

	len = gn_strlen(str);
	dup = (char *)malloc((len + 1) * (sizeof (char *)));
	i = 0;
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = dup[i];
		i++;
	}
	dup = '\0';
	return (dup);
}
