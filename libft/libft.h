/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:36:26 by gukim             #+#    #+#             */
/*   Updated: 2020/12/01 17:52:03 by gukim            ###   ########.fr       */
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
void		*ft_memmove(void *dst, const void *src, size_t size);
void		*ft_memchr(const void *buf, int c, size_t size);
int			ft_memcmp(const void *ptr1, const void *ptr2, size_t size);
size_t		ft_strlen(const char *str);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);

#endif
