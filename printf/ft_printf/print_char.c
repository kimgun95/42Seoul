/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 23:53:41 by marvin            #+#    #+#             */
/*   Updated: 2021/04/25 18:12:50 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int					print_char(int c, t_info *info)
{
	int				ret;

	ret = 0;
	if (info->type == '%' && info->minus == 1)
		info->zero = 0;
	if (info->minus == 1)
		ret += ft_putchar_fd(c, 1);
	ret += print_width(info);
	if (info->minus == 0)
		ret += ft_putchar_fd(c, 1);
	return (ret);
}

int					print_width(t_info *info)
{
	int				ret;
	int				len;

	ret = 0;
	len = 1;
	while (len < info->width)
	{
		if (info->zero == 1)
			ft_putchar_fd('0', 1);
		else
			ft_putchar_fd(' ', 1);
		len++;
		ret++;
	}
	return (ret);
}
