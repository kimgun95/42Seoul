/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:20:14 by gukim             #+#    #+#             */
/*   Updated: 2021/04/29 21:19:08 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "./libft/libft.h"

# define TYPE "csdiupxX%"

typedef struct		s_info
{
	int				minus;
	int				zero;
	int				width;
	int				prec;
	char			type;
	int				nbr_base;
	int				nbr_sign;
}					t_info;

int					ft_printf(const char *format, ...);
int					parse_format(va_list ap, char *format);
int					check_info(va_list ap, char *format, t_info *info, int i);
void				check_width_and_prec(va_list ap,
		char *format, t_info *info, int i);
int					print_type(va_list ap, t_info *info);

int					print_char(int c, t_info *info);
int					print_width(t_info *info);
int					print_string(char *str, t_info *info);
int					cal_width_str(char **buf, t_info *info);
char				*parse_buf(char *str, int end);
int					print_nbr(long long nbr, t_info *info);
int					cal_prec_str(unsigned long long nbr,
		t_info *info, char **buf);
int					cal_minus2(int buf_len, t_info *info, char **buf);
int					cal_minus(t_info *info, char **buf);
int					make_pointer_prefix(char **buf);

void				init_info(t_info *info);
int					ft_nbrlen(unsigned long long nbr, t_info *info);
char				*ft_baseset(char type);

#endif
