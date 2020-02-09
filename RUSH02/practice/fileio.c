/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileio.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjung <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 18:42:52 by bjung             #+#    #+#             */
/*   Updated: 2020/02/08 18:46:09 by bjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		main(void)
{
	FILE	*fp;
	int		num1;
	int		num2;

	printf("num1 : ");
	scanf("%d", &num1);
	printf("num2 : ");
	scanf("%d", &num2);
	fp = fopen("fileio.txt", "wt");
	if (fp == NULL)
	{
		printf("failure - exit\n");
		return (1);
	}
	fprintf(fp, "%d + %d = %d\n", num1, num2, num1 + num2);
	fprintf(fp, "%d - %d = %d\n", num1, num2, num1 - num2);
	fprintf(fp, "%d * %d = %d\n", num1, num2, num1 * num2);
	fprintf(fp, "%d / %d = %d\n", num1, num2, num1 / num2);
	fclose(fp);
	printf("complete\n");
	return (0);
}
