/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 19:18:10 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/14 21:56:05 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findset(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*result;

	if (!s1)
		return (ft_strdup(""));
	i = 0;
	while (ft_findset(s1[i], set) == 1)
		i++;
	j = (int)ft_strlen(s1) - 1;
	if (i == (int)ft_strlen(s1))
		return (ft_strdup(""));
	while (ft_findset(s1[j], set) == 1)
		j--;
	result = malloc((j - i) + 2);
	if (!result)
		return (NULL);
	k = 0;
	while (i <= j)
		result[k++] = s1[i++];
	result[k] = '\0';
	return (result);
}
/*
int	main(void)
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	printf("%d", (int)ft_strlen(s1));
	char *set = " \n\t";
	char *r = ft_strtrim(s1, set);
	printf("%s", r);
	return (0);
}*/
