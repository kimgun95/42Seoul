/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:06:58 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 17:06:59 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t num, size_t size)
{
	void		*buffer;

	buffer = (void *)malloc(num * size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, num * size);
	return (buffer);
}
