/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:08:00 by gukim             #+#    #+#             */
/*   Updated: 2021/05/05 12:55:12 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char *s1, char *s2, int free_check)
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
	if (free_check == 0)
		free(s1);
	else if (free_check == 1)
		free(s2);
	return (buf);
}
