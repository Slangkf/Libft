/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:50:08 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/15 10:50:11 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strchr - locates the first occurrence of a character in a string.
 
This function searches for the first occurrence of the character 'c'
in the string 's'. If the character is found, a pointer to its position
in 's' is returned. If the character is not found, the function returns NULL.

Return: pointer to the first occurrence of 'c' in 's', or NULL if not found.

Note: cast 'c' to unsigned char to handle values 0-255 correctly.
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char) c)
	{
		if (*s == 0)
			return (0);
		s++;
	}
	return ((char *)s);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	tab[] = "bhgbh";
	printf("Adresse premiere occurence: %p", ft_strchr(tab, 'a'));
	return (0);
}*/
