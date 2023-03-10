/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 17:13:55 by ifridrik          #+#    #+#             */
/*   Updated: 2023/01/20 17:13:55 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		str_len;
	char	*cpy;

	str_len = ft_strlen(s1);
	cpy = malloc(str_len * sizeof (char) + 1);
	ft_strlcpy(cpy, s1, str_len + 1);
	return (cpy);
}
