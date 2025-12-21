/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 10:37:32 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/13 10:37:36 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_bzero - sets memory to zero

This function fills the first 'n' bytes of the memory
area pointed to by 's' with zero bytes.

Return: nothing (void function).

Note: void *s allows it to work with any type of memory.
It is cast to unsigned char* because you cannot dereference
a void pointer directly.
*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ps;
	size_t			i;

	ps = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ps[i] = 0;
		i++;
	}
}

/*
#include <strings.h>
#include <stdio.h>

int	main(void)
{
	int	n = 6;
	char tab[] = "Hello, World !";
	
	ft_bzero(tab, n);
	printf("%d, ", tab[0]);
	printf("%d, ", tab[5]);
	printf("%d\n", tab[6]);
	
	bzero(tab, n);
	printf("%d, ", tab[0]);
	printf("%d, ", tab[5]);
	printf("%d\n", tab[6]);
	
	return (0);
}*/
