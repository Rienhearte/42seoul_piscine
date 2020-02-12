/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 22:39:48 by shpark            #+#    #+#             */
/*   Updated: 2020/02/06 23:22:13 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_count_if.c"

int	ft_is_first_x(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	int		length;
	char	**array;

	length = 5;
	array = malloc(length * sizeof(char *));
	array[0] = "O";
	array[1] = "X";
	array[2] = "O";
	array[3] = "X";
	array[4] = "O";
	printf("ft_count_if(...) = %d\n",
		ft_count_if(array, length, &ft_is_first_x));
	printf("========= REAL ANSWER =========\n");
	printf("ft_count_if(...) = 2\n");
}
