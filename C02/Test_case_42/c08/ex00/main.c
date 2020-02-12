/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 07:16:19 by shpark            #+#    #+#             */
/*   Updated: 2020/02/05 10:21:48 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft.h"

int	main(void)
{
	char	string[15];
	char	*first_pointer;
	int		length;
	int a;
	int b;
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;
	char *str9;

	ft_putchar('A');
	printf("\n");
	printf("correct Answer : A\n");
	printf("\"ft_putchar\" is valid\n");
	
	string[0] = 'H';
	string[1] = 'e';
	string[2] = 'l';
	string[3] = 'l';
	string[4] = 'o';
	string[5] = ' ';
	string[6] = 'W';
	string[7] = 'o';
	string[8] = 'r';
	string[9] = 'l';
	string[10] = 'd';
	string[11] = ' ';
	string[12] = '4';
	string[13] = '2';
	string[14] = '\0';
	first_pointer = &string[0];
	length = ft_strlen(first_pointer);
	printf("String : %s\n", string);
	printf("length %d\n", length);
	printf("\"ft_strlen\" is valid\n");
	
	first_pointer = &string[0];
	printf("%s\n", string);
	ft_putstr(first_pointer);
	printf("\n\"ft_putstr\" is valid\n");

    a = 1;
    b = 2;
    printf("before: %d %d\n", a, b);
    ft_swap(&a, &b);
    printf("after: %d %d\n", a, b);
	printf("\"ft_swap\" is valid\n");

	str1 = "Hello";
	str2 = "apple";
	str3 = "";
	str4 = "ABCD";
	str5 = "abcdEghe";
	str6 = "Hello World!";
	str7 = "HelLO wOrLd!";
	str8 = "hELlo WoRld!";
	str9 = "z";

	printf("c  : %d\n", strcmp(str1, str2));
	printf("ft : %d\n", ft_strcmp(str1, str2));
	printf("c  : %d\n", strcmp(str3, str4));
	printf("ft : %d\n", ft_strcmp(str3, str4));
	printf("c  : %d\n", strcmp(str4, str5));
	printf("ft : %d\n", ft_strcmp(str4, str5));
	printf("c  : %d\n", strcmp(str4, str9));
	printf("ft : %d\n", ft_strcmp(str4, str9));
	printf("c  : %d\n", strcmp(str4, str5));
	printf("ft : %d\n", ft_strcmp(str4, str5));
	printf("c  : %d\n", strcmp(str6, str7));
	printf("ft : %d\n", ft_strcmp(str6, str7));
	printf("c  : %d\n", strcmp(str6, str8));
	printf("ft : %d\n", ft_strcmp(str6, str8));
	printf("\"ft_strcmp\" is valid\n");
}
