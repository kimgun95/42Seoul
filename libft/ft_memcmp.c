/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:12:16 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 17:12:18 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	size_t					i;

	i = 0;
	while (i < size)
	{
		if (*((unsigned char *)ptr1 + i) == *((unsigned char *)ptr2 + i))
			i++;
		else
			return (*((unsigned char *)ptr1 + i)
					- *((unsigned char *)ptr2 + i));
	}
	return (0);
}
