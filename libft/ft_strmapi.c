/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 09:36:17 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/28 09:36:19 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strmapi - applies a function to each character of a string and creates a new string

This function applies the function 'f' to each character of the string 's',
passing its index as the first argument. The result of 'f' for each character
is stored in a newly allocated string, which is null-terminated.

Return: pointer to the newly allocated string, or NULL if allocation fails
or if 's' or 'f' is NULL.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (NULL);
	i = 0;
	result = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdlib.h>
#include <stdio.h>

static char	ft_change(unsigned int i, char c)
{
	if (i % 2 == 1)
		return (ft_toupper(c));
	else
		return (c);
}

static char	ft_change(unsigned int i, char c)
{
	(void) i;
		return (ft_toupper(c));
}

int	main(void)
{
	char	*result;
	
	result = ft_strmapi("Hello, World !", ft_change);
	printf("Nouvelle string: %s\n", result);
	return (0);
}*/
