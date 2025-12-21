/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:48:00 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/20 15:48:02 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_substr - extracts a substring from a string

This function allocates and returns a new string which is a substring
of 's' starting at index 'start' and of maximum length 'len'. If 'start'
is greater than the length of 's', an empty string is returned. Memory
is allocated for the new string, which is null-terminated.

Return: pointer to the newly allocated substring, or NULL if allocation fails
or if 's' is NULL.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	copy = malloc (sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
			copy[j++] = s[i];
		i++;
	}
	copy[j] = '\0';
	return (copy);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*dest = (ft_substr("Hello", 4, 5));
	printf("New string : %s", dest);
	return (0);
}*/
