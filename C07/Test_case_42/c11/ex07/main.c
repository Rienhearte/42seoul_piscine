/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 22:40:15 by shpark            #+#    #+#             */
/*   Updated: 2020/02/06 23:23:23 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_advanced_sort_string_tab.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}
int		main(void)
{
	int		index;
	char	**tab;
	tab = malloc(8 * sizeof(char *));
	tab[0] = strdup("hello");
	tab[1] = strdup("world");
	tab[2] = strdup("a");
	tab[3] = strdup("aa");
	tab[4] = strdup("ba");
	tab[5] = strdup("ab");
	tab[6] = strdup("z");
	tab[7] = 0;
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	printf("\n");
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
	printf("========= REAL ANSWER =========\n");
	printf("tab[0] <@ 0x7f9331402a70> = $hello$\n");
	printf("tab[1] <@ 0x7f9331402a78> = $world$\n");
	printf("tab[2] <@ 0x7f9331402a80> = $a$\n");
	printf("tab[3] <@ 0x7f9331402a88> = $aa$\n");
	printf("tab[4] <@ 0x7f9331402a90> = $ba$\n");
	printf("tab[5] <@ 0x7f9331402a98> = $ab$\n");
	printf("tab[6] <@ 0x7f9331402aa0> = $z$\n\n");
	printf("tab[0] <@ 0x7f9331402a70> = $a$\n");
	printf("tab[1] <@ 0x7f9331402a78> = $aa$\n");
	printf("tab[2] <@ 0x7f9331402a80> = $ab$\n");
	printf("tab[3] <@ 0x7f9331402a88> = $ba$\n");
	printf("tab[4] <@ 0x7f9331402a90> = $hello$\n");
	printf("tab[5] <@ 0x7f9331402a98> = $world$\n");
	printf("tab[6] <@ 0x7f9331402aa0> = $z$\n");
}
