/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:14:06 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/10 15:16:58 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	diff;
	int		finished;

	finished = 0;
	i = 0;
	diff = 0;
	while (i < n && !diff && !finished)
	{
		diff = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (!s1[i] || !s2[i])
			finished = 1;
		i++;
	}
	return (diff);
}
