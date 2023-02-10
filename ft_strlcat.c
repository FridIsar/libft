/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:13:58 by ifridrik          #+#    #+#             */
/*   Updated: 2023/02/10 17:52:20 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	j;
	int	max;

	j = 0;
	i = ft_strlen(dst);
	max = dstsize - i - 1;
	while (i < max)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (i);
}
