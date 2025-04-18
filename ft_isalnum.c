/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 13:46:05 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/18 15:00:07 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
		return (1);
	else
		return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Invalid number of arguments.\n");
	if (ft_isalnum(argv[1][0]) == 1)
	{
		printf("Char c is an alphabetical or a numeric.\n");
		printf("Result of original isalnum: %d\n", isalnum(argv[1][0]));
	}
	if (ft_isalnum(argv[1][0]) == 0)
	{
		printf("Char c is not an alphabetical neither a numeric.\n");
		printf("Result of original islanum: %d\n", isalnum(argv[1][0]));
	}
	return (0);
}*/
