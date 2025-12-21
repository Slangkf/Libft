/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:12:22 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/13 14:12:25 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memmove - copies memory area safely

This function copies 'n' bytes from the memory area pointed to by 'src'
to the memory area pointed to by 'dest'. It handles overlapping memory areas
by copying backwards when necessary. Memory is accessed as unsigned char
arrays to correctly handle 0-255 values.

Return: pointer to 'dest'. If both 'dest' and 'src' are NULL, returns NULL.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	if (!dest && !src)
		return (0);
	if ((psrc < pdest) && ((psrc + n) > pdest))
	{
		psrc = psrc + n - 1;
		pdest = pdest + n - 1;
		while (n--)
			*pdest-- = *psrc--;
	}
	else
	{
		while (n--)
			*pdest++ = *psrc++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello, World !";
	char	dest[20];

	ft_memmove(dest, src, 8);
	dest[8] = '\0';
	printf("%s\n", dest);

	ft_memmove(src + 7, src, 5);
	printf("%s\n", src);
	return (0);
}*/
