/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:11:19 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 20:08:22 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int	main()
{
	t_list	*n1;
	t_list	*n2;
	t_list	*n3;
	
	n1 = ft_lstnew("banana");
	n2 = ft_lstnew("apple");
	n3 = ft_lstnew("grape");
	
	n1->next = n2;
	n2->next = n3;
	int n = ft_lstsize(n1);
	printf("%d", n);
}
*/
