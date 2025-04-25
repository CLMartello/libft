/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 19:37:43 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 15:04:28 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while ((src[j] != '\0') && ((i + j) < (size - 1)) && size != 0)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	if (i > size)
		return (j + size);
	return (i + j);
}
/*
int	main(int argc, char *argv[])
{
	char	buffer[20] = "carol";
	char	buffer2[20] = "carol";
	size_t	n = 10;

	if (argc != 2)
	{
		return (0);
	}
	int x = ft_strlcat(buffer, argv[1], n);
	printf("%s\n", buffer);
	printf("%d\n", x);
	int y = strlcat(buffer2, argv[1], n);
	printf("%s\n", buffer2);
	printf("%d\n", y);
	return (0);
}*/
