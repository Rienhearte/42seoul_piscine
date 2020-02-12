/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 22:39:22 by shpark            #+#    #+#             */
/*   Updated: 2020/02/06 23:20:51 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_map.c"

int	ft_square(int number)
{
	return (number * number);
}

int	main(void)
{
	int	index;
	int	*tab;
	int	length;
	int	*results;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		tab[index] = index;
		index++;
	}
	results = ft_map(tab, length, &ft_square);
	index = 0;
	while (index < length)
	{
		printf("[mapped] square(%d) = %d\n", index, results[index]);
		index++;
	}
	printf("========= REAL ANSWER =========\n");
	printf("[mapped] square(0) = 0\n");
	printf("[mapped] square(1) = 1\n");
	printf("[mapped] square(2) = 4\n");
	printf("[mapped] square(3) = 9\n");
	printf("[mapped] square(4) = 16\n");
	printf("[mapped] square(5) = 25\n");
	printf("[mapped] square(6) = 36\n");
	printf("[mapped] square(7) = 49\n");
	printf("[mapped] square(8) = 64\n");
	printf("[mapped] square(9) = 81\n");
}
