/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:43:23 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 14:42:48 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (dest);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char dest[] = "des";
	char src[] = "source";
	char dest2[] = "des";

	printf("Mine: %s\n", (char *)ft_memcpy(&dest, &src, 2));
	printf("Original: %s\n", (char *)memcpy(&dest2, &src, 2));
	return (0);
}*/
