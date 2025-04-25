/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 22:02:27 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 15:14:35 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
int     main(int argc, char *argv[])
{
        if (argc != 2)
                printf("Invalid number of arguments.");
        printf("Mine original char: %c\n", argv[1][0]);
        printf("Mine modified char: %c\n", ft_tolower(argv[1][0]));
        printf("Original function original char: %c\n", argv[1][0]);
        printf("Original function modified char: %c\n", tolower(argv[1][0]));
        return (0);
}*/
