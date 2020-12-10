/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim <gukim@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 17:11:02 by gukim             #+#    #+#             */
/*   Updated: 2020/12/10 17:35:21 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*new_lst;
	t_list			*pos_new;
	t_list			*pos_old;

	if (!lst || !(new_lst = ft_lstnew((*f)(lst->content))))
		return (NULL);
	pos_new = new_lst;
	pos_old = lst->next;
	while (pos_old)
	{
		if (!(pos_new->next = ft_lstnew((*f)(pos_old->content))))
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		pos_new = pos_new->next;
		pos_old = pos_old->next;
	}
	return (new_lst);
}
