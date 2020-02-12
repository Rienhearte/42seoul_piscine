/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:43:53 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:46:54 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putnbr.c"

int		main(void)
{
	ft_putnbr(42);
	printf(" : putnbr(42)\n");
	printf("\n");
	ft_putnbr(4242);
	printf(" : putnbr(4242)\n");
	printf("\n");
	ft_putnbr(20000706);
	printf(" : putnbr(20000706)\n");
	printf("\n");
	ft_putnbr(+2147483647);
	printf(" : putnbr(2147483647)\n");
	printf("\n");
	ft_putnbr(-2147483648);
	printf(" : putnbr(-2147483648)\n");
	printf("\n");
}
