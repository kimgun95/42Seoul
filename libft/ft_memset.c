/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2020/11/30 10:47:07 by gukim             #+#    #+#             */
/*   Updated: 2020/11/30 16:58:09 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dst, int val, size_t size)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		value;

	i = 0;
	dest = (unsigned char *)dst;
	value = (unsigned char)val;
	while (i < len)
	{
		*(dest + i) = value;
		i++;
	}
	return (dest);
=======
/*   Created: 2020/10/21 17:34:19 by gukim             #+#    #+#             */
/*   Updated: 2020/10/21 17:37:41 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	main(){
	char a[5];

	memset(a, 65, sizeof(a));

	for(int i=0; i<(sizeof(a)/sizeof(char)); i++)
	{
		printf("%c\n", a[i]);
	}
>>>>>>> b0099a5b07bda1d7ed80c763ee49c7cfc2ecca2f
}
