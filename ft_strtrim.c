/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:53:35 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/17 13:51:18 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (i < end && !start)
	{
		if (ft_strchr(set, s1[i]) == 0)
			start = i;
		i++;
	}
	i = end;
	while (i && (size_t) end == ft_strlen(s1))
	{
		if (ft_strchr(set, s1[i]) == 0)
			end = i;
		i--;
	}
	return (ft_substr(s1, start, end - start));
}
