/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:13:22 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/10 09:06:41 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** is it too much to multiply line 28 by sizeof char?
** or is it already counted in bytes?
*/

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;

	ret = malloc(count * size);
	if (!ret)
		return (NULL);
	ft_memset(ret, 0, count * size);
	return (ret);
}
