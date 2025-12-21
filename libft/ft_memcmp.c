/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 12:07:21 by tclouet           #+#    #+#             */
/*   Updated: 2025/12/20 12:27:44 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memcmp - compares two memory areas

This function compares the first 'n' bytes of the memory areas
pointed to by 's1' and 's2'. Each byte is interpreted as an unsigned char
to handle all values 0-255 correctly. 

Return: 0 if the memory areas are equal, 1 if the first differing byte
in 's1' is greater than in 's2', or -1 if it is smaller.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
			return (1);
		if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const unsigned char	s1[] = "Hello !";
	const unsigned char	s2[] = "Hello!";
	size_t	n = 7;
	printf("%d\n", ft_memcmp(s1, s2, n));
	return (0);
}*/
