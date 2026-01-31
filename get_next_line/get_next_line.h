/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: furyilma <furyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:16:11 by furyilma          #+#    #+#             */
/*   Updated: 2024/11/21 18:22:39 by furyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 42

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_join(char *str1, char *str2);
int		ft_strlen(char const *str);
int		ft_strchr(char *str, int c);
char	*ft_new_line(char *str);
char	*ft_new_string(char *str);

#endif

