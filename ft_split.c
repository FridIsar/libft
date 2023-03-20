/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: openculturalcenter <openculturalcenter@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:54:12 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/20 18:32:21 by opencultura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	ft_countchar(char const *s, char c)
{
	int	i;
	int	nb_char;

	i = 0;
	nb_char = 0;
	while (s[i])
	{
		if (s[i] == c)
			nb_char++;
		i++;
	}
	return (nb_char);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	int		end;
	int		nb_delim;
	char	**arr;

	i = 0;
	j = 0;
	start = 0;
	nb_delim = ft_countchar(s, c) + 2;
	arr = malloc(nb_delim * sizeof (char)); // sizeof?
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			end = i;
			printf("start %i, end - start %i\n", start, end - start);
			arr[j] = ft_substr(s, start, end - start);
			j++;
			start = end + 1;
		}
		i++;
	}
	arr[j] = NULL;
	return (arr);
}
