/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:13:38 by ifridrik          #+#    #+#             */
/*   Updated: 2023/02/17 17:08:25 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	to_find;
	unsigned char	*to_search;
	size_t			i;

	to_find = (unsigned char) c;
	to_search = (unsigned char *) s;
	i = 0;
	while (to_search[i] && i < n)
	{
		if (to_search[i] == to_find)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}
