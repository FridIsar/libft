/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:14:13 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/10 14:07:56 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last;

	i = 0;
	last = -1;
	while (i <= (int) ft_strlen(s))
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (last >= 0)
	{
		return ((char *) &s[last]);
	}
	return (NULL);
}
