/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 17:08:43 by gukim             #+#    #+#             */
/*   Updated: 2020/11/30 17:18:20 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t size)
{
	size_t					i;
	unsigned char			*dest;

	i = 0;
	dest = (unsigned char *)dst;
	while (i < size)
	{
		*(dest + i) = 0;
		i++;
	}
}
