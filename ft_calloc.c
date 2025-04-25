/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 18:09:48 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 19:47:53 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	result = malloc(nmemb * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nmemb * size);
	return (result);
}
/*
int	main(void)
{
	int	*array;
	int	*array2;

	array = 0;
	array2 = 0;
//	array = ft_calloc(100, ((size_t)1<<(sizeof(size_t) * 8 -1)) + 1);
	array = ft_calloc(4, 5);
	if (array)
		printf("My test is ok.\n");
	array2 = calloc(4, 5);
	if (array2)
		printf("Original calloc ok.\n");
	return (0);
	
}*/
