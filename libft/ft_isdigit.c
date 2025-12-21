/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclouet <tclouet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 14:38:37 by tclouet           #+#    #+#             */
/*   Updated: 2024/11/12 14:47:40 by tclouet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_isdigit - checks if a character is a digit

This function returns 1 if the input character 'c' is a digit
('0' to '9'). Otherwise, it returns 0.

Return: 1 if 'c' is a digit, 0 otherwise.
*/
int	ft_isdigit(int c)
{
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
	int	i = 0;
	
	while(i <= 47)
	{
		printf("%d", ft_isdigit(i));
		i++;
	}
	return (0);
}*/
