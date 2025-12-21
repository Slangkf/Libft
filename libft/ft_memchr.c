/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:05:43 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/15 15:05:45 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memchr - searches for a byte in memory

This function scans the first 'n' bytes of the memory area pointed to by 's'
for the first occurrence of the byte 'c'. The memory is accessed as 
unsigned characters to handle all byte values correctly. 

Return: a pointer to the matching byte, or NULL if the byte is not found.

Note: cast to unsigned char to handle values 0-255 correctly.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ps;
	size_t				i;

	ps = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (*ps == (unsigned char)c)
		{
			return ((void *)ps);
		}
			ps++;
			i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	string[] = "Hello, World !";
	char	*pdest;
	int		ch;
	int		result;

	ch = 'o';
	pdest = ft_memchr(string, ch, sizeof(string));
	result = (int)(pdest - string + 1);
	if (pdest != NULL)
		printf("Result: %c found at position %d\n", ch, result);
	else
		printf("Result: %c not found", ch);
	return (0);
}*/
