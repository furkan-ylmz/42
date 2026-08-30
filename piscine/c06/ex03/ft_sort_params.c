/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 09:49:18 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/08 11:52:59 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write (1, &str[a], 1);
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	counter;
	int	counter1;

	counter = 1;
	while (counter < argc - 1)
	{
		counter1 = 1;
		while (counter1 < argc - 1)
		{
			if (ft_strcmp(argv[counter1], argv[counter1 + 1]) > 0)
				ft_swap(&argv[counter1], &argv[counter1 + 1]);
			counter1++;
		}
		counter++;
	}
	counter1 = 1;
	while (counter1 < argc)
	{
		ft_putstr(argv[counter1]);
		write(1, "\n", 1);
		counter1++;
	}
}
