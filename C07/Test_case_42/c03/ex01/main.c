/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 05:37:09 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 14:10:03 by shpark           ###   ########.fr       */
/*   Updated: 2020/01/30 08:45:49 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int	main(void)
{
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;

	str1 = "Helo";
	str2 = "Helloo";
	str3 = "abcd";
	str4 = "Hello World";
	str5 = "Hell";
	printf("===CASE1===\n");
	printf("n = 3, Comparison between \"%s\" and \"%s\" \n", str1, str2);
	printf("c  : %d\n", strncmp(str1, str2, 3));
	printf("ft : %d\n", ft_strncmp(str1, str2, 3));
	printf("===CASE2===\n");
	printf("n = 4, Comparison between \"%s\" and \"%s\" \n", str1, str3);
	printf("c  : %d\n", strncmp(str1, str3, 4));
	printf("ft : %d\n", ft_strncmp(str1, str3, 4));
	printf("===CASE3===\n");
	printf("n = 300, Comparison between \"%s\" and \"%s\" \n", str4, str5);
	printf("c  : %d\n", strncmp(str4, str5, 300));
	printf("ft : %d\n", ft_strncmp(str4, str5, 300));
	printf("===CASE4===\n");
	printf("n = 2, Comparison between \"%s\" and \"%s\" \n", str4, str5);
	printf("c  : %d\n", strncmp(str4, str5, 2));
	printf("ft : %d\n", ft_strncmp(str4, str5, 2));
	printf("===CASE5===\n");
	printf("n = 0, Comparison between \"%s\" and \"%s\" \n", str4, str5);
	printf("c  : %d\n", strncmp(str4, str5, 0));
	printf("ft : %d\n", ft_strncmp(str4, str5, 0));
	printf("===CASE6===\n");
	printf("n = 4294967295, Comparison between \"%s\" and \"%s\" \n", str4, str5);
	printf("c  : %d\n", strncmp(str4, str5, 4294967295));
	printf("ft : %d\n", ft_strncmp(str4, str5, 4294967295));
}
