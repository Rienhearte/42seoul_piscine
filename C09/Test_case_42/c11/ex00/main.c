/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 22:38:37 by shpark            #+#    #+#             */
/*   Updated: 2020/02/06 23:11:51 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_foreach.c"

void	x_ft_put_number(int number)
{
	if (number > 9)
		x_ft_put_number(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

int		main(void)
{
	int	index;
	int	*tab;
	int	length;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		tab[index] = index;
		index++;
	}
	ft_foreach(tab, length, &x_ft_put_number);
	printf("\n");
	printf("REAL ANSWER : 0123456789\n");
}
