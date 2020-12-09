/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukim </var/mail/gukim>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 15:53:57 by gukim             #+#    #+#             */
/*   Updated: 2020/12/09 14:07:50 by gukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list		*res_head;
	t_list		*res_next;
	t_list		*curr;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	if (!(res_head = ft_lstnew(f(lst->content))))
		return (NULL);
	curr = res_head;
	lst = lst->next;
	while (lst)
	{
		if (!(res_next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&res_head, del);
			return (NULL);
		}
		curr->next = res_next;
		curr = res_next;
		lst = lst->next;
	}
	return (res_head);
}
