/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 04:25:03 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:43:35 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncpy.c"

int		main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	printf("===CASE1===\n");
	printf("base   : %s\n", src);
	strncpy(dest, src, 8);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 8);
	printf("ft_cpy : %s\n", dest);
	src = "               a     ";
	printf("===CASE2===\n");
	printf("base   : %s\n", src);
	strncpy(dest, src, 16);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 16);
	printf("ft_cpy : %s\n", dest);
}
