/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 09:11:25 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/26 09:11:26 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_count_n - counts the number of characters needed.

This function returns the number of characters required to represent
the input number 'num' as a string, including space for a negative sign
if the number is negative. Zero is counted as 1 character.

Return: number of characters needed for the string representation.
*/
static int	ft_count_n(long int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		count++;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

/*
ft_itoa - converts an integer to a string.

This function allocates a new string representing the integer 'n'.
It uses ft_count_n() to determine the required string length,
handles negative numbers by adding a '-' sign, and fills the string
from the end with each digit. The string is null-terminated.

Return: pointer to the allocated string, or NULL if allocation fails
*/
char	*ft_itoa(int n)
{
	long int	num;
	int			len;
	char		*result;

	num = n;
	len = ft_count_n(num);
	result = malloc (sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num == 0)
		result[0] = '0';
	if (num < 0)
	{
		result[0] = '-';
		num *= -1;
	}
	while (len-- && num != 0)
	{
		result[len] = num % 10 + '0';
		num /= 10;
	}
	return (result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	n = -2147483648;

	printf("%s", ft_itoa(n));
	return (0);
}*/
