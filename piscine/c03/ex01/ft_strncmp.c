/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 12:41:02 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/06 12:41:04 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while ((s1[counter] != '\0' || s2[counter] != '\0') && counter < n)
	{
		if (s1[counter] > s2[counter])
		{
			return (1);
		}
		else if (s1[counter] < s2[counter])
		{
			return (-1);
		}
		counter++;
	}
	return (0);
}
