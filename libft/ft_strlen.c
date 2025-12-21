/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:37:54 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/12 16:15:41 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strlen - computes the length of a string

This function calculates the number of characters in the string 's'
excluding the terminating null byte.

Return: the length of the string.
*/
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%zu", ft_strlen("Hello, World!"));
	return (0);
}*/
