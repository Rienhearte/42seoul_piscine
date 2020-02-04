/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 21:16:35 by seoh              #+#    #+#             */
/*   Updated: 2020/02/04 13:04:49 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_digit;

int		chk_error(char *base)
{
	int cnt;
	int chk[256];

	cnt = 0;
	while (cnt <= 255)
		chk[cnt++] = 0;
	cnt = 0;
	while (*base != '\0')
	{
		if (*base == '-' || *base == '+')
			return (0);
		if (chk[(int)(*base)] == 1)
			return (0);
		chk[(int)(*base)] = 1;
		cnt++;
		base++;
	}
	if (cnt == 0 || cnt == 1)
		return (0);
	g_digit = cnt;
	return (1);
}

void	ft_calculate_base(int nbr, char *str)
{
	int export;
	int val;
	int tmp;

	tmp = nbr;
	if (nbr == 0)
	{
		write(1, &str[0], 1);
		return ;
	}
	val = 1;
	if (nbr < 0)
		write(1, "-", 1);
	while ((nbr = nbr / g_digit) != 0)
		val *= g_digit;
	while (val != 0)
	{
		export = tmp / val;
		if (export < 0)
			export = export * (-1);
		write(1, &str[export], 1);
		tmp = tmp % val;
		val = val / g_digit;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (chk_error(base) == 0)
		return ;
	ft_calculate_base(nbr, base);
	return ;
}
