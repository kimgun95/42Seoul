/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 11:26:59 by gukim             #+#    #+#             */
/*   Updated: 2020/12/05 12:08:54 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		cnt_word(char const *s, char c)
{
	size_t			i;
	size_t			cnt;

	i = 0;
	cnt = 0;
	if (s[i] && s[i] != c)
	{
		i++;
		cnt++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			cnt++;
		i++;
	}
	return (cnt);
}

char		**malloc_free(char **s, size_t idx)
{
	while (idx >= 0)
	{
		free(s[idx]);
		idx--;
	}
	free(s);
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
			if (!(res[res_idx++] = ft_substr(s, 0, len)))
				return (malloc_free(res, res_idx));
			s += len;
		}
	}
	res[res_idx] = 0;
	return (res);
}
