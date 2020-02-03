/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 04:51:13 by seoh              #+#    #+#             */
/*   Updated: 2020/02/03 04:52:31 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_letter(char a)
{
	write(1, &a, 1);
}

int		digits(int a)
{
	int digit;

	digit = 0;
	while (a > 0)
	{
		if (a != 0)
		{
			a = a / 10;
			digit++;
		}
	}
	return (digit);
}

void	outputs(int n, char num[])
{
	int i;

	i = 0;
	while (i <= n)
	{
		num[i] = num[i] + '0';
		print_letter(num[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		n;
	char	num[12];

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	i = digits(nb) - 1;
	n = digits(nb) - 1;
	while (i >= 0)
	{
		num[i] = nb % 10;
		nb = nb / 10;
		i--;
	}
	outputs(n, num);
}
