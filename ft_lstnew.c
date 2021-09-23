/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 09:57:17 by adel-cor          #+#    #+#             */
/*   Updated: 2021/06/24 09:51:13 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *) ft_calloc(1, sizeof(t_list));
	if (!element)
	{
		free (element);
		return (NULL);
	}
	element->content = content;
	element->next = NULL;
	return (element);
}
