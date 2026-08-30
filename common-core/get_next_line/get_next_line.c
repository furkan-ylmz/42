/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:15:42 by furyilma          #+#    #+#             */
/*   Updated: 2024/11/21 20:10:30 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_tmp(int fd, char *str)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!tmp)
		return (NULL);
	i = 1;
	while (ft_strchr(str, '\n') == 0 && i != 0)
	{
		i = read(fd, tmp, BUFFER_SIZE);
		if (i == -1)
		{
			free (tmp);
			free (str);
			return (NULL);
		}
		tmp[i] = '\0';
		str = ft_join(str, tmp);
	}
	free(tmp);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str;
	char		*new;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	str = ft_tmp(fd, str);
	if (!str)
		return (NULL);
	new = ft_new_line(str);
	str = ft_new_string(str);
	return (new);
}

