/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 22:40:08 by shpark            #+#    #+#             */
/*   Updated: 2020/02/06 23:20:00 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_is_sort.c"

int		ft_less_than(int a, int b)
{
	return (b - a);
}

int		ft_more_than(int a, int b)
{
	return (a - b);
}

int		main(void)
{
	static int	tabx[] = { 1, 2, 2, 2, 3, 3, 4, 5, 6, 6, 6, 6, 7 };
	int			index;
	int			*tab;
	int			length;

	length = 10;
	tab = malloc(length * sizeof(int));
	index = 0;
	while (index < length)
	{
		tab[index] = index;
		index++;
	}
	printf("ft_is_sorted(1.........10) = %d\n", ft_is_sort(tab, length, &ft_less_than));
	index = 0;
	while (index < length)
	{
		tab[length - 1 - index] = index;
		index++;
	}
	printf("ft_is_sorted(10.........1) = %d\n", ft_is_sort(tab, length, &ft_more_than));
	tab[5] = 100;
	printf("ft_is_sorted(10...100...1) = %d\n", ft_is_sort(tab, length, &ft_more_than));
	tab[5] = 4;
	tab[9] = 100;
	printf("ft_is_sorted(10.....1.100) = %d\n", ft_is_sort(tab, length, &ft_more_than));
	printf("ft_is_sorted(.tabx.......) = %d\n", ft_is_sort(tabx, 13, &ft_more_than));
	printf("ft_is_sorted(.tabx.......) = %d\n", ft_is_sort(tabx, 13, &ft_less_than));
	printf("========== REAL ANSWER ==========\n");
	printf("ft_is_sorted(1.........10) = 1\n");;
	printf("ft_is_sorted(10.........1) = 1\n");
	printf("ft_is_sorted(10...100...1) = 0\n");
	printf("ft_is_sorted(10.....1.100) = 0\n");
	printf("ft_is_sorted(.tabx.......) = 1\n");
	printf("ft_is_sorted(.tabx.......) = 1\n");
}
