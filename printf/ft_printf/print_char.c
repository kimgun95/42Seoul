/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 23:53:41 by marvin            #+#    #+#             */
/*   Updated: 2021/04/23 23:53:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf"

int             print_char(int c, t_info *info)
{
    int             ret;

    ret = 0;
    if (info->type == '%' && info->minus == 1)
        info->zero = 0;
    if (info->minus == 1)
        ret += ft_putchar(c);
    ret += cal_width(info->width, 1, info->zero);
    if (info->minus == 0)
        ret += ft_putchar(c);
    return (ret);
}

int             cal_width(int width, int len, int zero)
{
    int             ret;

    ret = 0;
    while (len < width)
    {
        if (zero == 1)
            ft_putchar('0');
        else
            ft_putchar(' ');
        len++;
        ret++;
    }
    return (ret);
}