/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 12:05:39 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/18 14:22:40 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Invalid number of arguments.\n");
	if (ft_isdigit(argv[1][0]) == 1)
	{
		printf("Char c is a digit.\n");
		printf("Result of original isdigit: %d\n", isdigit(argv[1][0]));
	}
	if (ft_isdigit(argv[1][0]) == 0)
	{
		printf("Char c is not a digit.\n");
		printf("Result of original isdigit: %d\n", isdigit(argv[1][0]));
	}
	return (0);
}*/
