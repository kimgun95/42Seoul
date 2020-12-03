/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:06:15 by gukim             #+#    #+#             */
/*   Updated: 2020/12/03 17:13:52 by gukim            ###   ########.fr       */
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
