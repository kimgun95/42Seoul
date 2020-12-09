/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:08:31 by gukim             #+#    #+#             */
/*   Updated: 2020/12/09 16:24:52 by gukim            ###   ########.fr       */
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
