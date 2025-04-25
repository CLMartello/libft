/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:20:14 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 16:25:04 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)s1 || (unsigned char *)s2) && i < n)
	{
		if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
			return (1);
		else if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char *s1 = "carolina";
	char *s2 = "carolina";
	int n = 6;

	printf("Mine: %d\n", ft_memcmp(s1, s2, n));
	printf("Original: %d\n", memcmp(s1, s2, n));
	return (0);
}*/
