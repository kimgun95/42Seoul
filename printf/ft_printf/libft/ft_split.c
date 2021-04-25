/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:08:30 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 18:29:51 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		cnt_word(char const *s, char c)
{
	size_t			cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else
		{
			cnt++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (cnt);
}

char		**malloc_free(char **s, size_t idx)
{
	while (s[idx] != NULL && idx >= 0)
	{
		free(s[idx]);
		s[idx] = NULL;
		idx--;
	}
	free(s);
	s = NULL;
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	char			**res;
	size_t			word_cnt;
	size_t			res_idx;
	size_t			len;

	word_cnt = cnt_word(s, c);
	if (!s || !(res = (char **)malloc(sizeof(char *) * (word_cnt + 1))))
		return (NULL);
	res_idx = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			len = 0;
			while (*(s + len) && *(s + len) != c)
				len++;
			if (!(res[res_idx++] = ft_substr(s, 0, len)) && res_idx < word_cnt)
				return (malloc_free(res, res_idx));
			s += len;
		}
	}
	res[res_idx] = 0;
	return (res);
}
