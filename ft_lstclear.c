/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:03:33 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/18 19:19:35 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_lst;

	if (lst)
	{
		while (*lst)
		{
			next_lst = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = next_lst;
		}
	}
}
