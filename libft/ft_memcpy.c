/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:46:30 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/13 11:46:32 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memcpy - copies memory area

This function copies 'n' bytes from the memory area pointed to by 'src'
to the memory area pointed to by 'dest'. Both areas are treated as
unsigned char arrays to correctly handle 0-255 values.

Return: pointer to 'dest'. If both 'dest' and 'src' are NULL, returns NULL.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello, ";
	char	dest[] = "World !";
	size_t	n = 3;
	
	ft_memcpy(dest, src, n);
	printf("%s", dest);
	
	memcpy(dest, src, n);
	printf("%s", dest);
	
	return (0);
}*/
