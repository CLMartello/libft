/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 15:11:05 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 15:52:31 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&s[i]);
		i++;
	}
	return (NULL);
}
/*
int     main(void)
{
        char *s = "teste";
        int c = 's';
	int n = 5;
        printf("Mine: %s\n", (char *)ft_memchr(s, c, n));
        printf("Original: %s\n", (char *)memchr(s, c, n));
        return (0);
}*/
