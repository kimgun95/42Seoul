/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 19:37:15 by gukim             #+#    #+#             */
/*   Updated: 2021/02/23 19:51:34 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_next_line(int fd, char **line)
{
	size_t			size;
	char			buf[BUFFER_SIZE + 1];
	static char		*keep_buf[OPEN_MAX];

	if ((fd < 0) || (BUFFER_SIZE <= 0))
		return (-1);
	while ((size = read(fd, bug, BUFFER_SIZE)) > 0)
	{
		buf[size] = '\0';
		keep_buf[fd] = ft_strjoin(backup[fd], buf);
