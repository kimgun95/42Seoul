/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:07:50 by gukim             #+#    #+#             */
/*   Updated: 2021/04/19 22:35:46 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int					ft_printf(const char *format)
{
	int				ret;
	va_list			ap;

	va_start(ap, format);
	ret = parse_format(ap, (char*)format);
	va_end(ap);
	return (ret);
}