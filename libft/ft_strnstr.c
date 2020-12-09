/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:34:05 by gukim             #+#    #+#             */
/*   Updated: 2020/12/09 16:26:24 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			size;

	size = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	while (*big && len-- >= size)
	{
		if (ft_memcmp(big, little, size) == 0)
			return ((char *)big);
		big++;
	}
	return (NULL);
}
