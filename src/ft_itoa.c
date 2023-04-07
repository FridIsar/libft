/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:54:44 by ifridrik          #+#    #+#             */
/*   Updated: 2023/04/03 15:26:04 by ifridrik         ###   ########.fr       */
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

unsigned int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	unsigned int	un;
	char			*str;
	int				len;

	len = ft_countdigits(n);
	un = ft_abs(n);
	if (n < 0)
		len++;
	str = malloc((len + 1) * sizeof (char));
	if (!str)
		return (NULL);
	str[len] = '\0';
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
