/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:39:18 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/08 09:51:07 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;
	int	counter1;

	counter = argc - 1;
	counter1 = 0;
	while (counter >= 1)
	{
		while (argv[counter][counter1] != '\0')
		{
			write(1, &argv[counter][counter1], 1);
			counter1++;
		}
		write(1, "\n", 1);
		counter1 = 0;
		counter--;
	}
}
