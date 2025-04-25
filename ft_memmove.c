/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:13:15 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 14:49:17 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pt_d;
	unsigned char	*pt_s;

	pt_d = (unsigned char *)dest;
	pt_s = (unsigned char *)src;
	if ((!dest && !src) || n == 0)
		return (dest);
	i = 0;
	if (pt_d < pt_s)
		ft_memcpy(dest, src, n);
	i = n;
	if (pt_d > pt_s)
	{
		while (i > 0)
		{
			i--;
			pt_d[i] = pt_s[i];
		}
	}
	return (pt_d);
}
/*
int	main(void)
{
	char dest[] = "destine";
	char src[] = "source";
	size_t n = 3;

	printf("My ft_memmove result: %s\n", (char *)ft_memmove(&dest, &src, n));
	printf("Original memmove result: %s\n", (char *)memmove(&dest, &src, n));
	return (0);
}*/
