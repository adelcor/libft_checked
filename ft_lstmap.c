/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 09:22:40 by adel-cor          #+#    #+#             */
/*   Updated: 2021/06/24 09:50:55 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*new_l;
	t_list	*new_e;
	t_list	*list;

	if (lst)
	{
		list = lst;
		new_l = ft_lstnew(f(list->content));
		if (!new_l)
			return (NULL);
		list = list->next;
		while (list)
		{
			new_e = ft_lstnew(f(list->content));
			if (!new_e)
			{
				ft_lstclear(&new_l, del);
				return (NULL);
			}
			ft_lstadd_back(&new_l, new_e);
			list = list->next;
		}
		return (new_l);
	}
	return (NULL);
}
