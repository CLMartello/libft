/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:52:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 17:28:11 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
static void	f(unsigned int n, char *s)
{
	int i = 0;

	while (i < n)
	{
		write(1, s, 1);
		write(1, "\n", 1);
		i++;
	}
}

int	main(void)
{
	char *s = "aaaaa";
	printf("Original word %s\n", s);
	ft_striteri(s, f);
	return (0);
}*/
