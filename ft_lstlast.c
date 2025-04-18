/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 16:20:47 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/18 16:26:48 by clumertz         ###   ########.fr       */
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
