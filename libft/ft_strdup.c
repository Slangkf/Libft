/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:55:47 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/20 13:55:48 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_strdup - duplicates a string

This function allocates memory and creates a copy of the string 's'.
The duplicated string is null-terminated.

Return: pointer to the newly allocated string, or NULL if allocation fails.
*/
char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	copy = malloc (sizeof(char) * (i + 1));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*copy = ft_strdup(NULL);
	char	*copy = ft_strdup("Hello, World !");

	if (copy != NULL)
		printf("%s\n", copy);
	else
		printf("Error");
	free(copy);
	return (0);
}*/
