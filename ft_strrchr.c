/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 13:25:10 by adel-cor          #+#    #+#             */
/*   Updated: 2021/06/24 10:18:47 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	char	ca;

	ptr = (char *)str + ft_strlen(str);
	ca = (char) c;
	while (ptr >= str)
	{
		if (*ptr == ca)
		{
			return (ptr);
		}
		ptr--;
	}
	return (NULL);
}
