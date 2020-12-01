/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 17:52:17 by gukim             #+#    #+#             */
/*   Updated: 2020/12/01 18:16:45 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			dst_i;
	size_t			src_i;

	dst_i = 0;
	src_i = 0;
	while (dst[dst_i])
		dst_i++;
	while (src[src_i] && dst_i < size - 1)
	{
		dst[dst_i] = src[src_i];
		dst_i++;
		src_i++;
	}
	dst_i[dst_i] = '\0';
	if (size > ft_strlen(dst))
		return (ft_strlen(src) + ft_strlen(dst));
	else
		return (ft_strlen(src) + size);
}
