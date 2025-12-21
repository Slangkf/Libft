/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:53:25 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/19 15:01:35 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_atoi - converts a string to an integer

This function converts the string 'nptr' to an int.
It skips any leading whitespace, handles an optional '+' or '-' sign,
and accumulates consecutive digits into an integer value.
Conversion stops at the first non-digit character.

Return: the integer value represented by the initial digits of the string.
*/
int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	sign = 1;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -sign;
		i++;
	}
	num = 0;
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	const char	tab[] = "42727\n+";

	printf("%d\n", ft_atoi(tab));
	printf("%d\n", atoi(tab));
	return (0);
}*/
