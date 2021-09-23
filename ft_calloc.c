/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 09:42:07 by adel-cor          #+#    #+#             */
/*   Updated: 2021/06/08 13:37:17 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*str;
	size_t	i;

	i = n * s;
	str = (void *)malloc(i * sizeof (*str));
	if (str == NULL)
	{
		return (NULL);
	}
	ft_memset(str, 0, i);
	return (str);
}
