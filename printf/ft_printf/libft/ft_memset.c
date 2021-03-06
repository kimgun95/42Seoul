/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:01:23 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 17:01:31 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int val, size_t size)
{
	size_t				i;

	i = 0;
	while (i < size)
	{
		*((unsigned char *)dst + i) = val;
		i++;
	}
	return (dst);
}
