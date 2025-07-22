/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:20:47 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 20:25:13 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_lst;

	if (!lst)
		return (NULL);
	while (lst)
	{
		last_lst = lst;
		lst = lst->next;
	}
	return (last_lst);
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
	n2->next = n3;
	n2 = ft_lstlast(n1);
	printf("Content last node: %s\n", (char *)n2->content);
	return (0);
}*/
