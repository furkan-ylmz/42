/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:39:04 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/06 09:37:41 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	counter;
	unsigned int	counter1;

	counter = 0;
	counter1 = 0;
	if (to_find[counter] == '\0')
	{
		return (str);
	}
	while (str[counter] != '\0')
	{
		while ((str[counter + counter1] == to_find[counter1])
			&& str[counter + counter1] != '\0')
		{
			counter1++;
		}
		if (to_find[counter1] == '\0')
			return (str + counter);
		counter++;
		counter1 = 0;
	}
	return (0);
}
