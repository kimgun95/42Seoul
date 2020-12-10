/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 12:09:41 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 16:42:22 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t			i;
	char			*last;
	char			letter;

	last = (char *)str;
	letter = (char)c;
	i = ft_strlen(str);
	while (i > 0)
	{
		if (last[i] == letter)
			return (last + i);
		i--;
	}
	if (last[i] == letter)
		return (last);
	return (0);
}
