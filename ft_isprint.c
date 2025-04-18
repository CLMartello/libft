/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:32:22 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/18 14:26:56 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
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
	if (ft_isprint(argv[1][0]) == 1)
	{
		printf("The char %c is a printable.\n", argv[1][0]);
		printf("Result of original isprint: %d.\n", isprint(argv[1][0]));
	}
        if (ft_isprint(argv[1][0]) == 0)
        {
                printf("The char %c is not a printable\n", argv[1][0]);
                printf("Result of original isprint: %d.\n", isprint(argv[1][0]));
        }
	return (0);
}*/
