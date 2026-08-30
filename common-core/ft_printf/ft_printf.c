/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:19:20 by furyilma          #+#    #+#             */
/*   Updated: 2024/11/18 19:26:07 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexbase(unsigned long lg, char alpha)
{
	int		index;
	int		counter;
	char	*base;
	char	ptr[64];

	if (alpha == 'p' && lg == 0)
		return (write(1, "(nil)", 5));
	if (alpha == 'p' || alpha == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (alpha == 'p')
		write(1, "0x", 2);
	index = 0;
	if (lg == 0)
		ptr[index++] = '0';
	while (lg != 0)
	{
		ptr[index++] = base[lg % 16];
		lg /= 16;
	}
	counter = index--;
	while (index != -1)
		write(1, &ptr[index--], 1);
	return (counter + 2);
}

int	ft_putdecbase(int i)
{
	int		counter;
	char	*text;

	text = ft_itoa(i);
	counter = ft_strlen(text);
	write(1, text, counter);
	free(text);
	return (counter);
}

void    ft_alpha(const char *format, int index, int *counter, va_list ptr)
{
	char    alpha;
	char    *tmp;

	if (format[index + 1] == 'c')
	{
		alpha = va_arg(ptr, int);
		*counter += write(1, &alpha, 1);
	}
	else if (format[index + 1] == 's')
	{
		tmp = va_arg(ptr, char *);
		if (tmp == NULL)
			*counter += write(1, "(null)", 6);
		else
			*counter += write(1, tmp, ft_strlen(tmp));
	}
}

void    ft_base(const char *format, int index, int *counter, va_list ptr)
{
	char    *tmp;

	if (format[index + 1] == 'p')
			*counter += ft_puthexbase(va_arg(ptr, unsigned long),
					format[index + 1]);
	else if (format[index + 1] == 'd' || format[index + 1] == 'i')
			*counter += ft_putdecbase(va_arg(ptr, int));
	else if (format[index + 1] == 'x' || format[index + 1] == 'X')
			*counter += (ft_puthexbase(va_arg(ptr, unsigned int),
						format[index + 1]) - 2);
	else if (format[index + 1] == 'u')
	{
		tmp = ft_unsigned_itoa(va_arg(ptr, unsigned int));
		*counter += write(1, tmp, ft_strlen(tmp));
		free(tmp);
	}
}

int     ft_printf(const char *format, ...)
{
	int             index;
	int             counter;
	va_list ptr;

	index = 0;
	counter = 0;
	va_start(ptr, format);
	while (format[index] != '\0')
	{
		if (format[index] == '%')
		{
			if (format[index + 1] == 'c' || format[index + 1] == 's')
				ft_alpha(format, index++, &counter, ptr);
			else if (format[index + 1] == 'p' || (format[index + 1] == 'd'
						|| format[index + 1] == 'i') || (format[index + 1] == 'x'
						|| format[index + 1] == 'X') || (format[index + 1] == 'u'))
				ft_base(format, index++, &counter, ptr);
			else if (format[index++ + 1] == '%')
				counter += write(1, "%", 1);
		}
		else
			counter += write(1, &format[index], 1);
		index++;
	}
		return (counter);
}
