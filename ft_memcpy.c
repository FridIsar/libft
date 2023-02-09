/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: openculturalcenter <openculturalcenter@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:13:44 by ifridrik          #+#    #+#             */
/*   Updated: 2023/02/09 20:08:47 by opencultura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    size_t  i;
    char    *dst_buf;
    char    *src_buf;

    dst_buf = (char *) dst;
    src_buf = (char *) src;
    i = 0;
    while ((dst_buf[i] || src_buf[i]) && i < n)
    {
        dst_buf[i] = src_buf[i];
        i++;
    }
    return (dst);
}