/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 22:39:39 by shpark            #+#    #+#             */
/*   Updated: 2020/02/06 23:22:02 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_any.c"

int	ft_function(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	char	**array;

	array = malloc(5 * sizeof(char *));
	array[0] = "O";
	array[1] = "O";
	array[2] = "O";
	array[3] = "X";
	array[4] = 0;
	printf("ft_any(...) = %d\n", ft_any(array, &ft_function));
	printf("========= REAL ANSWER =========\n");
	printf("ft_any(...) = 1\n");
}
