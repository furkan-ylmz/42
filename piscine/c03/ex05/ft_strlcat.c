/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:35:11 by furyilma          #+#    #+#             */
/*   Updated: 2024/02/05 18:02:26 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_len(char *tmp)
{
	unsigned int	counter;

	counter = 0;
	while (tmp[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;
	unsigned int	counter1;
	unsigned int	dlen;
	unsigned int	slen;

	slen = ft_len(src);
	dlen = ft_len(dest);
	counter = dlen;
	counter1 = 0;
	if (n == 0 || n <= dlen)
		return (slen + n);
	while (src[counter1] != '\0' && counter1 < n - dlen - 1)
	{
		dest[counter] = src[counter1];
		counter++;
		counter1++;
	}
	dest[counter] = '\0';
	return (slen + dlen);
}
