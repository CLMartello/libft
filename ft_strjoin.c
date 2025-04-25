/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 19:46:21 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 16:49:30 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_size;
	int		s2_size;
	int		i;
	int		j;
	char	*result;

	s1_size = (int)ft_strlen(s1);
	s2_size = (int)ft_strlen(s2);
	result = malloc(s1_size + s2_size + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
/*
int	main(void)
{
	char const *s1 = "banana";
	char const *s2 = "pera";

	printf("Original words %s and %s\n", s1, s2);
	printf("Joined words %s\n", ft_strjoin(s1, s2));
	return (0);
}*/
