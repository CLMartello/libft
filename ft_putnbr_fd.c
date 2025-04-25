/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clumertz <clumertz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:26:26 by clumertz          #+#    #+#             */
/*   Updated: 2025/04/19 17:44:03 by clumertz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((n * -1), fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd(((n % 10) + '0'), fd);
	}
	else
		ft_putchar_fd((n + '0'), fd);
}
/*
#include <fcntl.h>

int     main(void)
{
        int fd;
        int n = -854955;

        fd = open("testfd.txt", O_WRONLY | O_TRUNC | O_CREAT, 0640);
        if (fd == -1)
                return (1);
        ft_putnbr_fd(n, fd);
        close(fd);
        return (0);
}*/
