/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 18:00:07 by gukim             #+#    #+#             */
/*   Updated: 2020/11/30 18:15:11 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t size)
{
	size_t					i;
	unsigned char			*dest;
	unsigned char			*source;
	unsigned char			word;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	word = (unsigned char)word;
	while (i < size)
	{
		*(dest + i) = *(source + i);
		if (*(source + i) == word)
			return ((unsigned char *)dst + i + 1);
		i++;
	}
	return (0);
}
