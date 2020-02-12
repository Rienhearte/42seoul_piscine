/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 04:50:18 by shpark            #+#    #+#             */
/*   Updated: 2020/02/05 10:21:24 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_strlen(char *str)
{
	return (*str ? 1 + ft_strlen(str + 1) : 0);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != 0 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}	
