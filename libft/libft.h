/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:36:26 by gukim             #+#    #+#             */
/*   Updated: 2020/11/30 18:16:04 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>

void		*ft_memset(void *dst, int val, size_t size);
void		*ft_bzero(void *dst, size_t size);
void		*ft_memcpy(void *dst, const void *src, size_t size);
void		*ft_memccpy(void *dst, const void *src, int c, size_t size);

#endif
