/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:27:33 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 20:32:19 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_lst;

	if (!*lst)
		*lst = new;
	else
	{
		last_lst = ft_lstlast(*lst);
		last_lst->next = new;
	}
}
/*
int	main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;

	n1 = ft_lstnew("banana");
	n2 = ft_lstnew("apple");
	n3 = ft_lstnew("grape");
	n1->next = n2;
	ft_lstadd_back(&n1, n3);
	printf("Content last: %s\n", (char *)ft_lstlast(n1)->content);
	return (0);
}*/
