/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:47:47 by gukim             #+#    #+#             */
/*   Updated: 2020/12/05 15:08:35 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		n_len(int n)
{
	size_t			size;

	size = 1;
	if (n < 0)
		size++;
	while (n > 9)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	size_t			len;
	char			*res;

	len = n_len(n);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	res[len--] = 0;
	if (n < 0)
	{
		n *= -1;
		res[0] = '-';
	}
	while (n > 9)
	{
		res[len--] = n % 10 + '0';
		n /= 10;
	}
	res[len] = n + '0';
	return (res);
}
