/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 21:22:27 by seoh              #+#    #+#             */
/*   Updated: 2020/02/11 21:28:32 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	put_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	int size;
	int out;
	int tmp;

	tmp = nb;
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	size = 1;
	if (nb < 0)
		write(1, "-", 1);
	while ((nb = nb / 10) != 0)
		size = size * 10;
	while (size != 0)
	{
		out = tmp / size;
		if (out < 0)
			out = out * (-1);
		out = 48 + out;
		write(1, &out, 1);
		tmp = tmp % size;
		size = size / 10;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str != 0)
	{
		put_str(par->str);
		ft_putnbr(par->size);
		write(1, "\n", 1);
		put_str(par->copy);
		par++;
	}
}
