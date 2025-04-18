/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 22:18:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/18 14:20:17 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Invalid number of arguments.\n");
	if (ft_isalpha(argv[1][0]) == 1)
	{
		printf("Char c is alphabetical.\n");
		printf("Result of original isalpha: %d\n", isalpha(argv[1][0]));
	}
	if (ft_isalpha(argv[1][0]) == 0)
	{
		printf("Char c is not alphabetical.\n");
		printf("Result of original isalpha: %d\n", isalpha(argv[1][0]));
	}
	return (0);
}*/
