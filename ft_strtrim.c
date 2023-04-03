/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:53:35 by ifridrik          #+#    #+#             */
/*   Updated: 2023/04/03 14:01:54 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;
	int	len;

	if (!s1)
		return (0);
	len = ft_strlen(s1);
	start = 0;
	end = len;
	while (start <= len / 2 && ft_strchr(set, s1[start]))
		start++;
	while (end >= len / 2 && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	return (ft_substr(s1, start, (end + 1) - start));
}
