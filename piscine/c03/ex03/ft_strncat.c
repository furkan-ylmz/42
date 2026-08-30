/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:35:01 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/06 09:35:01 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	unsigned int	counter1;

	counter = 0;
	while (dest[counter] != '\0')
	{
		counter++;
	}
	counter1 = 0;
	while (src[counter1] != '\0' && counter1 < n)
	{
		dest[counter] = src[counter1];
		counter++;
		counter1++;
	}
	dest[counter] = '\0';
	return (dest);
}
