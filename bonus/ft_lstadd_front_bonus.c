/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:02:52 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 18:44:23 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *l;

	n1 = ft_lstnew("banana");
	n2 = ft_lstnew("apple");
	ft_lstadd_front(&l, n1);
	ft_lstadd_front(&l, n2);
        printf("Content first node: %s\n", (char *)l->content);
        return (0);
}*/
