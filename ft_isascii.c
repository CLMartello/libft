/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:26:42 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/18 14:25:43 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Invalid number of arguments.\n");
		return (0);
	}
	if (ft_isascii(argv[1][0]) == 1)
	{
		printf("The char %c is in the ascii table.\n", argv[1][0]);
		printf("Result of original isascii: %d.\n", isascii(argv[1][0]));
	}
        if (ft_isascii(argv[1][0]) == 0)
        {
                printf("The char %c is not in the ascii table.\n", argv[1][0]);
                printf("Result of original isascii: %d.\n", isascii(argv[1][0]));
        }
	return (0);
}*/
