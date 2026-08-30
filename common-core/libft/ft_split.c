/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:02:28 by furyilma          #+#    #+#             */
/*   Updated: 2024/10/24 16:02:28 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int		word_count;
	int		counter;
	int		flag;

	word_count = 0;
	counter = 0;
	flag = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] != c && flag == 0)
		{
			word_count++;
			flag = 1;
		}
		else if (s[counter] == c)
			flag = 0;
		counter++;
	}
	return (word_count);
}

static char	*ft_put(const char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static char	**ft_free_split(char **array)
{
	int	i;

	i = -1;
	while (array[++i] != NULL)
		free(array[i]);
	free(array);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		flag;
	int		i;
	int		j;

	i = -1;
	j = 0;
	flag = -1;
	array = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!array)
		return (NULL);
	while (++i <= (int)ft_strlen(s))
	{
		if (s[i] != c && flag < 0)
			flag = i;
		else if ((s[i] == c || s[i] == '\0') && flag >= 0)
		{
			array[j] = ft_put(s, flag, i);
			if (array[j++] == NULL)
				return (ft_free_split(array));
			flag = -1;
		}
	}
	array[j] = NULL;
	return (array);
}
