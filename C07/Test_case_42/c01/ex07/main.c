/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 03:45:22 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:43:06 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_rev_int_tab.c"

void	debug_dump_array(int numbers[], int size)
{
	int index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int		main(void)
{
	int numbers[9];
	int *first_pointer;
	int index;

	index = 0;
	while (index < 9)
	{
		numbers[index] = index + 1;
		index++;
	}
	first_pointer = &numbers[0];
	printf("before: ");
	debug_dump_array(numbers, 9);
	ft_rev_int_tab(first_pointer, 9);
	printf("\nafter : ");
	debug_dump_array(numbers, 9);
	printf("\n");
}
