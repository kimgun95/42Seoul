/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 16:36:26 by gukim             #+#    #+#             */
/*   Updated: 2020/12/03 17:18:12 by gukim            ###   ########.fr       */
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
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_strncmp(const char *str1, const char *str2, size_t num);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_calloc(size_t num, size_t size);
char		*ft_strdup(const char *str);

#endif
