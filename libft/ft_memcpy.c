/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:31:20 by gukim             #+#    #+#             */
/*   Updated: 2020/11/30 17:54:34 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t					i;
	unsigned char			*dest;
	unsigned char			*source;

	if (!dest && !source)
		return (0);
	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (i < size)
	{
		*(dest + i) = *(source + i);
		i++;
	}
	return (dest);
}
