/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:06:32 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/21 15:52:27 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;
	int		counter;

	counter = 0;
	tmp = (char *)s;
	while (tmp[counter])
	{
		if (tmp[counter] == (char)c)
			return (tmp + counter);
		counter++;
	}
	if (tmp[counter] == (char)c)
		return (tmp + counter);
	return (0);
}
