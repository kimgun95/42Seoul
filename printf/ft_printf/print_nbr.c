/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 23:50:25 by marvin            #+#    #+#             */
/*   Updated: 2021/05/05 12:54:28 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					make_pointer_prefix(char **buf)
{
	*buf = ft_strjoin("0x", *buf, 1);
	return (ft_strlen(*buf));
}

int					cal_minus(t_info *info, char **buf)
{
	int				len_to_add;

	len_to_add = 0;
	if ((info->type == 'i' || info->type == 'd') &&
					info->zero == 0 && info->nbr_sign == -1)
	{
		*buf = ft_strjoin("-", *buf, 1);
		len_to_add = 1;
	}
	return (len_to_add);
}

int					cal_minus2(int buf_len, t_info *info, char **buf)
{
	int				len_to_add;

	len_to_add = 0;
	if (info->nbr_sign == -1 && info->zero == 1)
	{
		if (buf_len >= info->width)
		{
			*buf = ft_strjoin("-", *buf, 1);
			len_to_add = 1;
		}
		else if (buf_len < info->width)
			*buf[0] = '-';
	}
	return (len_to_add);
}

int					cal_prec_str(unsigned long long nbr,
		t_info *info, char **buf)
{
	int				buf_len;
	int				ret;
	int				i;

	buf_len = ft_nbrlen(nbr, info);
	ret = (info->prec > buf_len) ? info->prec : buf_len;
	if (!(*buf = (char *)malloc(sizeof(char) * ret + 1)))
		return (0);
	i = 0;
	(*buf)[ret] = '\0';
	while (i < ret - buf_len)
	{
		(*buf)[i] = '0';
		i++;
	}
	i = 1;
	if (nbr == 0 && info->prec != 0)
		(*buf)[ret - i] = '0';
	while (nbr)
	{
		(*buf)[ret - i] = ft_baseset(info->type)[nbr % info->nbr_base];
		nbr /= info->nbr_base;
		i++;
	}
	return (buf_len);
}

int					print_nbr(long long nbr, t_info *info)
{
	char			*buf;
	int				buf_len;
	int				ret;

	if (info->type == 'x' || info->type == 'X' || info->type == 'p')
		info->nbr_base = 16;
	if ((info->type == 'd' || info->type == 'i') && (int)nbr < 0)
	{
		info->nbr_sign = -1;
		nbr = -nbr;
	}
	buf_len = cal_prec_str(nbr, info, &buf);
	buf_len += cal_minus(info, &buf);
	if (info->type == 'p')
		buf_len = make_pointer_prefix(&buf);
	ret = cal_width_str(&buf, info);
	ret += cal_minus2(buf_len, info, &buf);
	ft_putstr_fd(buf, 1);
	free(buf);
	return (ret);
}
