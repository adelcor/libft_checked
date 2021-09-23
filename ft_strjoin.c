/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 10:14:56 by adel-cor          #+#    #+#             */
/*   Updated: 2021/06/24 10:15:50 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(*new) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		new[i] = *s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		new[i] = *s2++;
		i++;
	}
	new[i] = '\0';
	return (new);
}
