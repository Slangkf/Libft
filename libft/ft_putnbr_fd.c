/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:32:34 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/29 10:32:36 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_putnbr_fd - writes an integer to a file descriptor

This function writes the integer 'n' to the given file descriptor 'fd'.
It handles negative numbers by printing a '-' sign and uses recursion
to output each digit. The special case of INT_MIN is handled separately
to avoid integer overflow.

Return: nothing (void function).
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n *= -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

/*
#include <unistd.h>
int	main(void)
{
	ft_putnbr_fd(9, 1);
	return (0);
}*/
