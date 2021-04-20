/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:03:56 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 17:04:09 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t size)
{
	size_t					i;

	i = 0;
	while (i < size)
	{
		if (*((unsigned char *)buf + i) == (unsigned char)c)
			return ((void *)buf + i);
		i++;
	}
	return (NULL);
}
