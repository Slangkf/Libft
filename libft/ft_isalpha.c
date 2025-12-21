/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:57:35 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/12 14:45:16 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_isalpha - checks if a character is alphabetic

This function returns 1 if the input character 'c' is a letter
(uppercase or lowercase). Otherwise, it returns 0.

Return: 1 if 'c' is a letter, 0 otherwise.
*/
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

	c = ';';
	printf("%d", ft_isalpha(c));
	printf("%d", isalpha(c));
	return (0);
}*/
