/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:17:02 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/12 16:18:28 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memset - fills memory with a constant byte

This function sets the first 'n' bytes of the memory area pointed to by 's'
to the value 'c'. The memory is accessed as unsigned char arrays to
handle all byte values from 0 to 255 correctly.

Return: pointer to the memory area 's'.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	a;
	size_t			i;

	ps = (unsigned char *) s;
	a = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		ps[i] = a;
		i++;
	}
	return (s);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World !";
	
	ft_memset(str, '0', 7);
	printf("%s\n", str);
	
	memset(str, '0', 7);
	printf("%s\n", str);

	return (0);
}*/
