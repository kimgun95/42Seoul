/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 22:21:35 by gukim             #+#    #+#             */
/*   Updated: 2021/02/24 22:29:35 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int		split_line(char **keep_buf, char **line, char *index_newline)
{
	char			*tmp;

	*index_newline = '\0';
	*line = ft_strdup(*keep_buf);
	tmp = ft_strdup(index_newline + 1);
	free(*keep_buf);
	*keep_buf = tmp;
	return (1);
}

int		return_all(char **keep_buf, char **line, int size)
{
	char			*idx_newline;

	if (size < 0)
		return (-1);
	if (*keep_buf == 0)
		*keep_buf = ft_strdup("");
	idx_newline = ft_strchr(*keep_buf, '\n');
	if (idx_newline != '\0')
		return (split_line(keep_buf, line, idx_newline));
	else
	{
		*line = *keep_buf;
		*keep_buf = 0;
		return (0);
	}
}

int		get_next_line(int fd, char **line)
{
	int				size;
	char			buf[BUFFER_SIZE + 1];
	static char		*keep_buf[OPEN_MAX];
	char			*index_newline;

	index_newline = 0;
	if ((fd < 0) || (line == 0) || (BUFFER_SIZE <= 0))
		return (-1);
	while ((size = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[size] = '\0';
		keep_buf[fd] = ft_strjoin(keep_buf[fd], buf);
		index_newline = ft_strchr(keep_buf[fd], '\n');
		if (index_newline != '\0')
			return (split_line(&keep_buf[fd], line, index_newline));
	}
	return (return_all(&keep_buf[fd], line, size));
}
