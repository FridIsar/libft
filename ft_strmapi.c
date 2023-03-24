/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: openculturalcenter <openculturalcenter@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:55:21 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/24 14:35:18 by opencultura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	char			*ret;

	i = ft_strlen(s) - 1;
	ret = malloc ((i + 1) * sizeof(char));
	while (i > -1)
	{
		ret[i] = f(i, s[i]);
		i--;
	}
	return (ret);
}
