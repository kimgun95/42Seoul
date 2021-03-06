/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 21:45:24 by gukim             #+#    #+#             */
/*   Updated: 2021/02/24 21:12:29 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int			get_next_line(int fd, char **line);
int			split_line(char **keep_buf, char **line, char *index_newline);
int			return_all(char **keep_buf, char **line, int size);

size_t		ft_strlen(char *str);
char		*ft_strjoin(char *s1, char *s2);
char		*ft_strdup(char *str);
char		*ft_strchr(char *str, char c);

#endif
