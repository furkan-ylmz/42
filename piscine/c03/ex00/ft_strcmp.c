/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 09:28:47 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/05 17:25:08 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while ((s1[counter] == s2[counter]) && (s1[counter] != '\0'
			|| s2[counter] != '\0'))
	{
		counter++;
	}
	return (s1[counter] - s2[counter]);
}
