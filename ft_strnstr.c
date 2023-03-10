/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:14:10 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/10 15:37:22 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0] || needle == haystack)
		return ((char *) haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (!haystack[i + j] && !needle[j])
				return ((char *) &haystack[i]);
			j++;
		}
		if (needle[j] == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
