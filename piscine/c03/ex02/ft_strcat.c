/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:21:45 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/06 09:37:28 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	counter;
	unsigned int	counter1;

	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	counter1 = 0;
	while (src[counter1] != '\0')
	{
		dest[counter] = src[counter1];
		counter++;
		counter1++;
	}
	dest[counter] = '\0';
	return (dest);
}
