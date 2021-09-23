/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 10:16:49 by adel-cor          #+#    #+#             */
/*   Updated: 2021/06/24 10:14:18 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = ft_strlen(s1);
	s2 = (char *) malloc(i * sizeof (*s2) + 1);
	if (s2 == NULL)
		return (NULL);
	ft_memcpy(s2, s1, i);
	s2[i] = '\0';
	return (s2);
}
