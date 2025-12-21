/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:49:33 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/14 11:51:15 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strlcat - concatenates strings with size limit

This function appends the string 'src' to the end of 'dst', ensuring that
no more than 'siz' bytes are written to 'dst', including the null terminator.
If 'dst' is already longer than or equal to 'siz', no concatenation occurs.

Return: the total length of the string it tried to create, which is the
initial length of 'dst' plus the length of 'src'.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;
	size_t	dst_l;
	size_t	src_l;

	i = 0;
	j = 0;
	while (i < siz && dst[i] != '\0')
		i++;
	dst_l = i;
	while (src[j] != '\0')
		j++;
	if (dst_l == siz)
		return (dst_l + j);
	src_l = 0;
	while (i + 1 < siz && src[src_l] != '\0')
	{
		dst[i] = src[src_l];
		i++;
		src_l++;
	}
	if (i < siz)
		dst[i] = '\0';
	return (dst_l + j);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	src[] = " World!";
	char	dst[] = "Hello";
	printf("total lengt = %zu\n", ft_strlcat(dst, src, 10));
	printf("dst : %s", dst);
	return (0);
}*/
