/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:46:13 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:47:22 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi_base.c"

int		main(void)
{
	printf("input number : -123456, base \"0123456789\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("-123456", "0123456789"));
	printf("Real Answer : -123456\n");
	fflush(stdout);
	printf("input number : 11110001001000000, base \"01\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("11110001001000000", "01"));
	printf("Real Answer : 123456\n");
	fflush(stdout);
	printf("input number : -1e240, base \"0123456789abcdef\"\n");
	printf("Your Answer : %d\n", ft_atoi_base("-1e240", "0123456789abcdef"));
	printf("Real Answer : -123456\n");
	fflush(stdout);
}
