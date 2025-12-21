/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:27:29 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/15 14:27:31 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strncmp - compares up to n characters of two strings

This function compares the first 'n' characters of the strings 's1' and 's2'.
Each character is cast to unsigned char to correctly handle values 0–255.

Return: 0 if the compared characters are equal, 1 if 's1' is greater than
's2', or -1 if 's1' is smaller than 's2'.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n--)
	{
		if ((unsigned char) *s1 > (unsigned char) *s2)
			return (1);
		if ((unsigned char) *s1 < (unsigned char) *s2)
		{
			return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("Difference: %d", ft_strncmp("test\200", "test\0", 6));
	return (0);
}*/
