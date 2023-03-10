/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:13:22 by ifridrik          #+#    #+#             */
/*   Updated: 2023/01/20 17:13:23 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** is it too much to multiply line 28 by sizeof char?
** or is it already counted in bytes?
*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	**ret;

	ret = malloc(count);
	i = 0;
	while (i < count)
	{
		ret[i] = malloc(size * sizeof (char));
		ft_memset(ret[i], 0, size);
		i++;
	}
	return (ret);
}
