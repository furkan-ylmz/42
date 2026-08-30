/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:07:24 by furyilma          #+#    #+#             */
/*   Updated: 2024/11/19 10:45:24 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_puthexbase(unsigned long lg, char alpha);
int		ft_putdecbase(int i);
int		ft_printf(const char *format, ...);
char	*ft_itoa(int i);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *str);
char	*ft_unsigned_itoa(unsigned int n);

#endif
