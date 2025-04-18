/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:34:25 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/18 14:27:56 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Invalid number of arguments.\n");
		return (0);
	}
	printf("The result of my ft_strlen is: %lu.\n", ft_strlen(argv[1]));
	printf("The result of the original strlen is: %lu.\n", strlen(argv[1]));
	return (0);
}*/
