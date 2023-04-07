/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: openculturalcenter <openculturalcenter@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:52:38 by opencultura       #+#    #+#             */
/*   Updated: 2023/04/07 13:23:00 by opencultura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_node;
	t_list	*tmp_next;

	if (!*lst)
		return ;
	tmp_node = *lst;
	*lst = NULL;
	while (tmp_node)
	{
		del(tmp_node->content);
		tmp_next = tmp_node->next;
		free(tmp_node);
		tmp_node = tmp_next;
	}
}
