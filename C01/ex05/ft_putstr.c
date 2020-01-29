/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 02:06:26 by seoh              #+#    #+#             */
/*   Updated: 2020/01/27 15:57:12 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	a;

	a = 0;
	while (1)
	{
		a = *str;
		if (a == '\0')
			break ;
		write(1, &a, 1);
		str++;
	}
}

#include <stdio.h>
int main()
{
	char str[] = "abcdef";
	ft_putstr(str); 
}
