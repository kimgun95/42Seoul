/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 15:43:27 by gukim             #+#    #+#             */
/*   Updated: 2020/12/01 16:00:25 by gukim            ###   ########.fr       */
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
			return (buf + i)
		i++;
	}
	return (NULL);
}
