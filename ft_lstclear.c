/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 08:56:18 by adel-cor          #+#    #+#             */
/*   Updated: 2021/06/24 09:46:48 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*eraser;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		eraser = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = eraser;
	}
}
