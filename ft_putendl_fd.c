/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:23:11 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 17:42:09 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>

int     main(void)
{
        int fd;
        char *s1 = "banana";
	char *s2 = "apple";

        fd = open("testfd.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
        if (fd == -1)
                return (1);
        ft_putendl_fd(s1, fd);
	ft_putendl_fd(s2, fd);
        close(fd);
        return (0);
}*/
