/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:56:05 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/15 09:56:45 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_toupper - converts a lowercase letter to uppercase

This function checks if 'c' is a lowercase ASCII letter (a-z). 
If so, it returns the corresponding uppercase letter (A-Z).
Otherwise, it returns 'c' unchanged.

Return: the uppercase equivalent of 'c' if applicable, or 'c' itself.
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

/*
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	printf("%c", ft_toupper('a'));
	return (0);
}*/
