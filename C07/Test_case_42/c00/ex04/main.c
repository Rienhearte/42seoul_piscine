/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:30:45 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:40:07 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_negative.c"

int		main(void)
{
	printf(" : ft_isnegative(1)");
	ft_is_negative(1);
	printf("\n");
	printf(" : ft_isnegative(0)");
	ft_is_negative(0);
	printf("\n");
	printf(" : ft_isnegative(-1)");
	ft_is_negative(-1);
	printf("\n");
}
