/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:28:42 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/08 09:38:33 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;
	int	counter1;

	counter = 1;
	counter1 = 0;
	while (counter < argc)
	{
		while (argv[counter][counter1] != '\0')
		{
			write(1, &argv[counter][counter1], 1);
			counter1++;
		}
		write(1, "\n", 1);
		counter1 = 0;
		counter++;
	}
}
