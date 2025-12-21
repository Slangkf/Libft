/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:34:47 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/12 15:37:01 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_isprint - checks if a character is printable

This function returns 1 if the input character 'c' is printable,
i.e., it has a value between 32 and 126 inclusive.
Otherwise, it returns 0.

Return: 1 if 'c' is printable, 0 otherwise.
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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

	c = 8;
	printf("%d", ft_isprint(c));
	return (0);
}*/
