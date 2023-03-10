/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:14:13 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/10 15:58:21 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	c = c % 256;
	while (*s)
	{
		if (*s == c)
			last = (char *)s;
		s++;
	}
	if (c == 0)
		last = (char *)s;
	return (last);
}
