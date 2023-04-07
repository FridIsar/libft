/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifridrik <ifridrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:54:12 by ifridrik          #+#    #+#             */
/*   Updated: 2023/04/03 15:23:07 by ifridrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	*ft_free(char **arr, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
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
		if (!arr[k])
			return (ft_free(arr, k));
		k++;
		start = end;
	}
	arr[k] = NULL;
	return (arr);
}
