/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:27:18 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 14:29:45 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	c;

	i = 0;
	c = '\0';
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
}
/*
int	main(void)
{
	char s[7] = "banana";
	size_t n = 3;
	char s2[7] = "banana";

	ft_bzero(&s, n);
	printf("My ft_bzero result: %s or char[5] %c\n", s, s[5]);
	bzero(&s2, n);
	printf("Original bzero result: %s or char[5] %c\n", s2, s2[5]);
	return (0);
}*/
