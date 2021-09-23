/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adel-cor <adel-cor@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 10:28:52 by adel-cor          #+#    #+#             */
/*   Updated: 2021/06/24 10:18:40 by adel-cor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long n)
{
	size_t	size;

	size = 0;
	if (n < 0)
		size = 1;
	while (1)
	{
		n = n / 10;
		size++;
		if (n == 0)
			break ;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	size_t	i;

	nbr = n;
	i = ft_len(n);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * (-1);
	}
	str[i] = '\0';
	while (1)
	{
		str[i - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
		if (nbr == 0)
			break ;
	}
	return (str);
}
