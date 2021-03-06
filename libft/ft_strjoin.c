/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:08:00 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 17:08:01 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char			*buf;

	if (!s1 || !s2)
		return (NULL);
	if (!(buf = (char *)malloc(sizeof(char) *
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	ft_memcpy(buf, s1, ft_strlen(s1));
	ft_memcpy(buf + ft_strlen(s1), s2, ft_strlen(s2));
	buf[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (buf);
}
