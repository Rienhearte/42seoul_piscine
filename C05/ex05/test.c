/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 03:28:30 by seoh              #+#    #+#             */
/*   Updated: 2020/02/05 03:35:56 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int idx;

	if (nb <= 0)
		return (0);
	if (nb <= 1)
		return (nb);
	idx = 1;
	while (idx * idx <= nb)
	{
		if (idx * idx == nb)
			return ((int)idx);
		idx++;
	}
	return (0);
}

#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int number;

	number = -2;
	while (number < 26)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
	}
	printf("sqrt(%d) = %d\n", 1000000, ft_sqrt(1000000));
	printf("sqrt(%d) = %d\n", INT_MAX, ft_sqrt(INT_MAX));
	printf("sqrt(%d) = %d\n", INT_MIN, ft_sqrt(INT_MIN));
	printf("sqrt(%d) = %d\n", 2147395600, ft_sqrt(2147395600));
}
