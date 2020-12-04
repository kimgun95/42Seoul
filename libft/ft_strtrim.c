/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:13:52 by gukim             #+#    #+#             */
/*   Updated: 2020/12/04 18:40:34 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t			size;

	if (!s1 || !set)
		return (NULL);
	size = ft_strlen(s1);
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	while (ft_strchr(set, s1[size]) && size > 0)
		size--;
	return (ft_substr(s1, 0, size + 1));
}
