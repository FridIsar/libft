/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: openculturalcenter <openculturalcenter@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:54:12 by ifridrik          #+#    #+#             */
/*   Updated: 2023/03/20 21:46:54 by opencultura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	nb_words;
	int	in_word;

	i = 0;
	nb_words = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			in_word = 1;
			nb_words++;
		}
		if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (nb_words);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	int		end;
	int		k;
	char	**arr;

	start = 0;
	k = 0;
	arr = malloc((ft_countwords(s, c) + 1) * sizeof (char *));
	if (!arr)
		return (NULL);
	while (s[start] && k < ft_countwords(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		arr[k] = ft_substr(s, start, end - start);
		k++;
		start = end;
	}
	arr[k] = NULL;
	return (arr);
}
