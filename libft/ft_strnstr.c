/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:05:03 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 17:05:04 by gukim            ###   ########.fr       */
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
