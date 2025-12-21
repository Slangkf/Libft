/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:49:01 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/29 09:49:02 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_putendl_fd - writes a string followed by a newline to a file descriptor

This function writes the string 's' to the given file descriptor 'fd',
followed by a newline character. Each character is written individually
using the write system call.

Return: nothing (void function).
*/
void	ft_putendl_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}

/*
#include <unistd.h>

int	main(void)
{
	ft_putendl_fd("Hello, World !", 1);
	return (0);
}*/
