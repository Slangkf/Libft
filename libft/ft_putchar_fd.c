/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:05:55 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/28 14:06:00 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_putchar_fd - writes a character to a file descriptor

This function writes the character 'c' to the given file descriptor 'fd'
using the write system call.

Return: nothing (void function).
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <unistd.h>

int	main(void)
{
	
	ft_putchar_fd('H', 1);
	return (0);
}*/
