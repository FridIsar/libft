/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:13:46 by ifridrik          #+#    #+#             */
/*   Updated: 2023/02/10 17:18:38 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst_buf;
	char	*src_buf;

	dst_buf = (char *)dst;
	src_buf = (char *)src;
	i = 0;
	while ((dst_buf[i] || src_buf[i]) && i < len)
	{
		dst_buf[i] = src_buf[i];
		i++;
	}
	return (dst);
}
