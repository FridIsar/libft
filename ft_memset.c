/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:13:49 by ifridrik          #+#    #+#             */
/*   Updated: 2023/02/03 17:46:56 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	int	i;
	char	*buf;

	i = 0;
	buf = (char *) b;
	while (i < len)
	{
		buf[i] = (char) c;
		i++;
	}
	return (b);
}
