/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:28:18 by shpark            #+#    #+#             */
/*   Updated: 2020/01/28 11:28:48 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_print_alphabet.c"

int		main(void)
{
	ft_print_alphabet();
	printf("\n");
	printf("Correct Answer : abcdefghijklmnopqrstuvwxyz\n");
}
