/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 14:29:06 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 15:25:13 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 4)
		printf("Invalid number os arguments.");
	int n = atoi(argv[3]);
	printf("My diff: %d\n", ft_strncmp(argv[1], argv[2], n));
        printf("Original diff: %d\n", strncmp(argv[1], argv[2], n));
	return (0);
}*/
