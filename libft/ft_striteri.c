/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:19:57 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/28 13:19:59 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_striteri - applies a function to each character of a string

This function applies the function 'f' to each character of the string 's'.
The function is called with the index of the character and a pointer to it,
allowing in-place modification of the string.

Return: nothing (void function).
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}	
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_change(unsigned int i, char *c)
{
	(void) i;
	*c = ft_toupper(*c);
}

void	ft_change(unsigned int i, char *c)
{
	if (i % 2 == 1)
	{
		if (*c >= 97 && *c <= 122)
			*c = *c - 32;
	}
}

int	main(void)
{
	char	tab[] = "Hello, World !";
	
	ft_striteri(tab, ft_change);
	printf("%s", tab);
	return (0);
}*/
