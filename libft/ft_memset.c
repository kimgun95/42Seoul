/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:47:07 by gukim             #+#    #+#             */
/*   Updated: 2020/11/30 16:58:09 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int val, size_t size)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		value;

	i = 0;
	dest = (unsigned char *)dst;
	value = (unsigned char)val;
	while (i < len)
	{
		*(dest + i) = value;
		i++;
	}
	return (dest);
}
