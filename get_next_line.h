/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eriviere <eriviere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:50:07 by eriviere          #+#    #+#             */
/*   Updated: 2024/07/30 13:04:27 by eriviere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
//Libreries
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
//Utilities Functions
size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_calloc(size_t count, size_t size);
char	*ft_double_free(char **str1, char **str2);
//Main Functions
char	*get_next_line(int fd);
char	*read_line(int fd, char *buffer, int bytes_read);
char	*update_buffer(char *buffer);
#endif
