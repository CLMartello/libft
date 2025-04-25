/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:08:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 16:59:22 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(int n)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 9)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = malloc(ft_size(n) + 1);
	if (!result)
		return (NULL);
	result[ft_size(n)] = '\0';
	i = ft_size(n) -1;
	if (n < 0)
	{
		n *= -1;
		result[0] = '-';
	}
	while (i >= 0 && result[i] != '-')
	{
		result[i] = ((n % 10) + '0');
		n = n / 10;
		i--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("My itoa: %s\n", ft_itoa(-1005));
	return (0);
}*/
