/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:10:32 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/21 15:10:34 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_is_in_set - checks if a character is in a set

This function checks whether the character 'c' is present in the
string 'set'.

Return: 1 if 'c' is found in 'set', 0 otherwise.
*/
static int	ft_is_in_set(char c, const char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

/*
ft_strtrim - trims characters from the beginning and end of a string

This function returns a new string which is a copy of 's1' with all
characters from 'set' removed from the start and end. Memory is
allocated for the new string, which is null-terminated.

Return: pointer to the trimmed string, or NULL if allocation fails
or if 's1' or 'set' is NULL.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_is_in_set(s1[start], set))
		start ++;
	end = ft_strlen(s1);
	while (end > start && ft_is_in_set(s1[end - 1], set))
		end --;
	result = malloc(sizeof(char) * (end - start + 1));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1 + start, end - start);
	result[end - start] = '\0';
	return (result);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char const s1[] = "AbbA";
	char const set[] = " ";
	char	*result;
	
	result = ft_strtrim(s1, set);
	printf("New string: %s\n", result);
	free(result);
	return (0);
}*/
