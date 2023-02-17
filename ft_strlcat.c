/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:13:58 by ifridrik          #+#    #+#             */
/*   Updated: 2023/02/17 14:45:49 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		i;
	int		j;
	size_t	dstlen;
	int		max;

	j = 0;
	dstlen = ft_strlen(dst);
	i = dstlen;
	max = dstsize - dstlen - 1;
	while (j < max)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize != 0 && dstlen > dstsize)
		dst[j] = 0;
	if (dstlen > dstsize)
		return (ft_strlen(src) + dstsize);
	return (dstlen + ft_strlen(src));
}
