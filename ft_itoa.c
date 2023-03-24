/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: openculturalcenter <openculturalcenter@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:54:44 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/24 13:49:17 by opencultura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countdigits(int n)
{
	int				i;
	unsigned int	un;

	if (n < 0)
		un = -n;
	else
		un = n;
	i = 1;
	while (un > 9)
	{
		un /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	un;
	char			*str;
	int				len;

	len = ft_countdigits(n);
	if (n < 0)
	{
		un = -n;
		len++;
	}
	else
		un = n;
	str = malloc(len * sizeof (char));
	if (!str)
		return (NULL);
	while (un > 9)
	{
		str[len - 1] = (un % 10) + '0';
		len--;
		un /= 10;
	}
	str[len - 1] = (un % 10) + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
