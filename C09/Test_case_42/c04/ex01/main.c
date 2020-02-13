/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:43:23 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:46:40 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putstr.c"

int		main(void)
{
	char *str;

	str = "Hello World";
	printf("string is \"%s\"\n",str);
	ft_putstr(str);
	printf("\n");
}
