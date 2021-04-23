/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 00:28:18 by marvin            #+#    #+#             */
/*   Updated: 2021/04/24 00:28:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf"

char            *parse_buf(char *str, int end, int len)
{
	int         i;
	char        *buf;

	end = end < len ? end : len;
	if (!(buf = (char *)malloc(sizeof(char) * end + 1)))
		return (NULL);
	i = 0;
	while (i < end)
	{
		buf[i] = str[i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}

int             put_width_str(char **buf, t_info *info)
{
	char        *width;
	int         i;

	if (info->width <= (int)ft_strlen(*buf))
		return ((int)ft_strlen(*buf));
	width = (char *)malloc(sizeof(char) * (info->width - ft_strlen(*buf) + 1));
	i = 0;
	while ((size_t)i < info->width - ft_strlen(*buf))
	{
		width[i] = (info->zero == 1) ? '0' : ' ';
		i++;
	}
	width[i] = '\0';
	if (info->minus == 0)
		*buf = ft_strjoin(width, *buf);
	else
		*buf = ft_strjoin(*buf, width);
    free(width);
	return (info->width);
}

int			    print_string(char *str, t_info *info)
{
	int         ret;
	char        *buf;

	ret = 0;
	if (str == NULL)
		str = "(null)";
	if (info->prec == -1 || (size_t)info->prec > ft_strlen(str))
		info->prec = ft_strlen(str);
	buf = parse_buf(str, info->prec, ft_strlen(str));
	ret = put_width_str(&buf, info);
	ft_putstr(buf);
	free(buf);
	return (ret);
}