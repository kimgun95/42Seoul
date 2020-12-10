/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:03:41 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 17:03:43 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t					i;

	i = 0;
	if (!size || dst == src)
		return (dst);
	if (dst < src)
	{
		while (i < size)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
	else
	{
		while (size > 0)
		{
			*((char *)dst + size - 1) = *((char *)src + size - 1);
			size--;
		}
	}
	return (dst);
}
