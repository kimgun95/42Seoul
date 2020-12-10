/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:03:15 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 17:03:18 by gukim            ###   ########.fr       */
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
