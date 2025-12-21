/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:48:57 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/12 14:54:59 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_isalnum - checks if a character is alphanumeric

This function returns 1 if the input character 'c' is a letter
(uppercase or lowercase) or a digit. Otherwise, it returns 0.

Return: 1 if 'c' is alphanumeric, 0 otherwise.
*/
int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int	c;

	c = 1;
	printf("%d", ft_isalnum(c));
	return (0);
}*/
