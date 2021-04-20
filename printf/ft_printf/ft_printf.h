/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 20:20:14 by gukim             #+#    #+#             */
/*   Updated: 2021/04/20 20:46:05 by gukim            ###   ########.fr       */
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

typedef struct s_info
{
	int				minus;
	int				zero;
	int				width;
	int				prec;
	char			type;
	int				nbr_base;
	int				nbr_sign;
}					t_info;

#endif