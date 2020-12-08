/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:41:55 by gukim             #+#    #+#             */
/*   Updated: 2020/12/08 15:49:23 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list		*cur;
	t_list		*next;

	cur = *lst;
	while (cur)
	{
		next = lst->next;
		ft_lstdelone(cur, del);
		cur = next;
	}
	*lst = NULL;
}
