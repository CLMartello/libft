/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:53:06 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 21:33:30 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*temp;

	new_lst = NULL;
	while (lst && f && del)
	{
		temp = f(lst->content);
		new_node = ft_lstnew(temp);
		if (!new_node)
		{
			del(temp);
			ft_lstclear(&new_lst, del);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
static void	*duplicate(void *s)
{
	return (ft_strtrim(((char *)s), ((char *)s)));
}

int	main(void)
{
	t_list *n1;
	t_list *n2;
	t_list *n3;

	n1 = ft_lstnew("123");
	n2 = ft_lstnew("-58");
	n3 = ft_lstnew("grape");
	n1->next = n2;
	n2->next = n3;
	printf("%s\n", (char *)n1->content);
	printf("%s\n", (char *)ft_lstmap(n1, duplicate, free)->content);
	return (0);
}*/
