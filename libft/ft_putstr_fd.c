/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 09:40:24 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/29 09:40:27 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_putstr_fd - writes a string to a file descriptor

This function writes the string 's' to the given file descriptor 'fd'
character by character using the write system call.

Return: nothing (void function).
*/
void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

/*
#include <unistd.h>

int	main(void)
{
	ft_putstr_fd("Hello, World !", 1);
	return (0);
}*/
