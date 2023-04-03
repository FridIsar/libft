/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:57:55 by ifridrik          #+#    #+#             */
/*   Updated: 2023/04/03 15:36:31 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countdigit(int n)
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

unsigned int	ft_abso(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_pow10(int pow)
{
	int	n;

	n = 1;
	while (pow > 0)
	{
		n *= 10;
		pow--;
	}
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	un;
	int				nbd;

	nbd = ft_countdigit(n) - 1;
	un = ft_abso(n);
	if (n < 0)
		write(fd, "-", 1);
	while (un > 9)
	{
		ft_putchar_fd((un / ft_pow10(nbd)) + '0', fd);
		un %= ft_pow10(nbd);
		nbd--;
	}
	ft_putchar_fd((un / ft_pow10(nbd)) + '0', fd);
}
