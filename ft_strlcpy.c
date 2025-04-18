/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 20:08:38 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/12 17:51:33 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	int				len;

	i = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while ((src[i] != '\0') && (i < (size -1)))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*
int	main(int argc, char *argv[])
{
	char	buffer[20] = "carol";
	char	buffer2[20] = "carol";

	if (argc != 3)
	{
		return (0);
	}
	int n = atoi(argv[2]);
	int x = ft_strlcpy(buffer, argv[1], n);
	printf("%s\n", buffer);
	printf("%d\n", x);
	int y = strlcpy(buffer2, argv[1], n);
	printf("%s\n", buffer2);
	printf("%d\n", y);
}*/
