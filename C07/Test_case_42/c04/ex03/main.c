/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:44:15 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:47:01 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi.c"

int		main(void)
{
	char *str;
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;
	char *str7;
	char *str8;
	char *str9;
	char *str10;
	char *str11;

	str = " ---+--+1234ab567";
	str1 = "     ---123123ab567";
	str2 = "-   -  -1a";
	str3 = "- + -+ - + a 1 b";
	str4 = "\t -123";
	str5 = "\n -123";
	str6 = "\v -123";
	str7 = "\f -123";
	str8 = "\r -123";
	str9 = "\t\n\v\f\r\t -+-+123abc";
	str10 = "-123";
	str11 = " 123";
	printf("string is \"%s\"\n",str);
	printf("Your Answer : %d\n", ft_atoi(str));
	printf("Real Answer : -1234\n");
	printf("string is \"%s\"\n",str1);
	printf("Your Answer : %d\n", ft_atoi(str1));
	printf("Real Answer : -123123\n");
	printf("string is \"%s\"\n",str2);
	printf("Your Answer : %d\n", ft_atoi(str2));
	printf("Real Answer : 0\n");
	printf("string is \"%s\"\n",str3);
	printf("Your Answer : %d\n", ft_atoi(str3));
	printf("Real Answer : 0\n");
	printf("string is \"%s\"\n",str4);
	printf("Your Answer : %d\n", ft_atoi(str4));
	printf("Real Answer : -123\n");
	printf("string is \"%s\"\n",str5);
	printf("Your Answer : %d\n", ft_atoi(str5));
	printf("Real Answer : -123\n");
	printf("string is \"%s\"\n",str6);
	printf("Your Answer : %d\n", ft_atoi(str6));
	printf("Real Answer : -123\n");
	printf("string is \"%s\"\n",str7);
	printf("Your Answer : %d\n", ft_atoi(str7));
	printf("Real Answer : -123\n");
	printf("string is \"%s\"\n",str8);
	printf("Your Answer : %d\n", ft_atoi(str8));
	printf("Real Answer : -123\n");
	printf("string is \"%s\"\n",str9);
	printf("Your Answer : %d\n", ft_atoi(str9));
	printf("Real Answer : 123\n");
	printf("string is \"%s\"\n",str10);
	printf("Your Answer : %d\n", ft_atoi(str10));
	printf("Real Answer : -123\n");
	printf("string is \"%s\"\n",str11);
	printf("Your Answer : %d\n", ft_atoi(str11));
	printf("Real Answer : 123\n");

}
