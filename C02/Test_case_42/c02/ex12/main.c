/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 04:51:06 by shpark            #+#    #+#             */
/*   Updated: 2020/02/07 08:48:43 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_print_memory.c"
#define SIZE 100

void	a(char a)
{
	write(1, &a, 1);
}
void	d(int i, unsigned char *addr, int size)
{
	int j;
	i += 1 + (i - 1) / 4;
	j = 0;
	while (i < 40)
	{
		a(' ');
		i++;
	}
	a(' ');
	while (size > 0)
	{
		if (*(addr + j) >= 32 && *(addr + j) <= 126)
			a(*(addr + j));
		else
			a('.');
		j++;
		size--;
	}
}
int		b(unsigned char *addr, int size)
{
	int i;
	int j;
	int hex[2];
	i = 0;
	j = 0;
	while (size > 0)
	{
		if (j % 2 == 0)
			write(1, " ", 1);
		hex[0] = *(addr + j) / 16;
		hex[1] = *(addr + j) % 16;
		if (hex[0] >= 10)
			a('a' + hex[0] - 10);
		else
			a('0' + hex[0]);
		if (hex[1] >= 10)
			a('a' + hex[1] - 10);
		else
			a('0' + hex[1]);
		i += 2;
		j++;
		size--;
	}
	return (i);
}
void	c(unsigned long long i)
{
	unsigned long long div;
	unsigned long long j;
	j = 15;
	div = 1;
	while (j > 0)
	{
		div *= 16;
		j--;
	}
	while (div >= 1)
	{
		if (i / div >= 10)
			a(i / div + 'a' - 10);
		else
			a(i / div + '0');
		i %= div;
		div /= 16;
	}
	write(1, ":", 1);
}

void	*answer_print_memory(void *addr, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	j = 0;
	i = 0;
	while (size > 0)
	{
		if (size / 16 >= 1)
			j = 16;
		else
			j = size;
		c((unsigned long long)(addr + i));
		k = b((unsigned char *)(addr + i), j);
		d(k, (unsigned char *)(addr + i), j);
		write(1, "\n", 1);
		i += 16;
		if (size <= 16)
			size = 0;
		else
			size -= 16;
	}
	return (addr);
}	
int		main(void)
{
	char	*string;
	char str[SIZE] = {
			0x42, 0x6f, 0x6e, 0x6a, 0x6f, 0x75, 0x72, 0x20, 0x6c, 0x65, 0x73, 0x20, 0x61, 0x6d, 0x69, 0x6e,
			0x63, 0x68, 0x65, 0x73, 0x09, 0x0a, 0x09, 0x63, 0x20, 0x20, 0x65, 0x73, 0x74, 0x20, 0x66, 0x6f,
			0x75, 0x09, 0x74, 0x6f, 0x75, 0x74, 0x09, 0x63, 0x65, 0x20, 0x71, 0x75, 0x20, 0x6f, 0x6e, 0x20,
			0x70, 0x65, 0x75, 0x74, 0x20, 0x66, 0x61, 0x69, 0x72, 0x65, 0x20, 0x61, 0x76, 0x65, 0x63, 0x09,
			0x0a, 0x09, 0x70, 0x72, 0x69, 0x6e, 0x74, 0x5f, 0x6d, 0x65, 0x6d, 0x6f, 0x72, 0x79, 0x0a, 0x0a,
			0x0a, 0x09, 0x6c, 0x6f, 0x6c, 0x2e, 0x6c, 0x6f, 0x6c, 0x0a, 0x20, 0x00, 0xff, 0xff, 0xff, 0xff,
			0xff, 0x00, 0x00, 0x00
	};
	printf("==========YOUR CASE==========\n");
	string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
	ft_print_memory(string, 200);
	printf("==========ANSWER==========\n");
	answer_print_memory(string, 200);
	printf("==========YOUR CASE==========\n");
	ft_print_memory((void*)str, SIZE);
	printf("==========ANSWER==========\n");
	answer_print_memory((void*)str, SIZE);
}
