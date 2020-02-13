/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 04:46:23 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:44:43 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "ft_strlcpy.c"

void	div_l(int size)
{
	printf("\n");
	for(int i = 0; i < size; i++)
		printf("-");
	printf("\n");
}
	void	div_b(int size)
{
	printf("\n");
	for(int i = 0; i < size; i++)
		printf("=");
	printf("\n");
}
	int		main(void)
{
	char	dest[15];
	char	src[10];
	int		rtn;
	int		size;

	for (size=0; size < 20; size++)
	{
		div_b(80);
		strcpy(dest, "12345678901234");
		strcpy(src, "abcdefghi");
		printf("%-12s | %-15s | %-15s | %-4s || %-15s"
				,"ft_name", "dest", "src", "size", "Return");

		div_l(80);

		printf("%-12s | %-15s | %-15s | %-4d ||"
				,"strlcpy", dest, src, size);

		div_l(80);
		rtn = strlcpy(dest, src, size);
		printf("%-12s | %-15s | %-15s | %-4d || %-4d "
				,"strlcpy", dest, src, size, rtn);

		div_b(80);
	}
}
