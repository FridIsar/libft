/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:14:21 by ifridrik          #+#    #+#             */
/*   Updated: 2023/04/03 15:25:40 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	int	isspace;

	isspace = (c == '\t' || c == '\n' || c == '\v');
	return (isspace || c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned int	res;
	int				sign;

	res = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res *= 10;
		res += (str[i] - '0');
		i++;
	}
	return (sign * res);
}
