/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:40:55 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/18 14:57:59 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;

	i = 0;
	ch = c;
	while (i < n)
	{
		((unsigned char *)s)[i] = ch;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char s[6] = "banana";
	int c = '#';
	size_t n = 3;

	printf("My memset result: %s\n", (char *)ft_memset(&s, c, n));
//	printf("%s", s);
	printf("Original memset result: %s\n", (char *)memset(&s, c, n));
	return (0);
}*/
