/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:31:20 by gukim             #+#    #+#             */
/*   Updated: 2020/12/01 10:38:20 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t					i;

	if (!size || dst == src)
		return (dst);
	i = 0;
	while (i < size)
	{
		*((char *)dst + i) = *((char *)src + i);
		i++;
	}
	return (dst);
}
