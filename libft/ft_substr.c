/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:46:11 by gukim             #+#    #+#             */
/*   Updated: 2020/12/04 17:12:05 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*buf;

	if (!s || !(buf = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (s[start + i] && i < len)
		{
			buf[i] = s[start + i];
			i++;
		}
	}
	buf[i] = '\0';
	return (buf);
}
