/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:55:21 by ifridrik          #+#    #+#             */
/*   Updated: 2023/04/03 15:26:52 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	char			*ret;

	i = ft_strlen(s) - 1;
	ret = malloc ((i + 2) * sizeof(char));
	if (!ret)
		return (NULL);
	ret[i + 1] = '\0';
	while (i > -1)
	{
		ret[i] = f(i, s[i]);
		i--;
	}
	return (ret);
}
