/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 22:00:11 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 15:12:56 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Invalid number of arguments.");
	printf("Mine original char: %c\n", argv[1][0]);
	printf("Mine modified char: %c\n", ft_toupper(argv[1][0]));
	printf("Original function original char: %c\n", argv[1][0]);
	printf("Original function modified char: %c\n", toupper(argv[1][0]));
	return (0);
}*/
