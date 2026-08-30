/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:22:18 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/08 11:58:28 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;

	(void) argc;
	counter = 0;
	while (argv[0][counter] != '\0')
	{
		write(1, &(argv[0][counter]), 1);
		counter++;
	}
	write(1, "\n", 1);
}
