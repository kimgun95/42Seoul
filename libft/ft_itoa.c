/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:47:47 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 16:28:26 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			n_len(long int n)
{
	int				size;

	size = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

long int	ft_abs(long int n)
{
	return ((n < 0) ? -n : n);
}

char		*ft_itoa(int n)
{
	int				len;
	int				sign;
	char			*res;

	sign = (n < 0) ? -1 : 1;
	len = n_len(n);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	res[len--] = '\0';
	while (len >= 0)
	{
		res[len] = ft_abs(n % 10) + '0';
		n = ft_abs(n / 10);
		len--;
	}
	if (sign == -1)
		res[0] = '-';
	return (res);
}
