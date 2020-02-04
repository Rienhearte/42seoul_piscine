/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 21:16:35 by seoh              #+#    #+#             */
/*   Updated: 2020/02/04 12:24:23 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int idx;
	
	idx = 0;
	while (str[idx] == '\0')
		idx++;
	return (idx);
}

int check_error(char *base)
{
	int cnt;
	int chk[256];

	cnt = 0;
	while (cnt <= 255)
		chk[cnt] = 0;
	while (*base != '\0')
	{
		printf("aaa"); //////////
		if (*base == '+' || *base == '-')
			return (0);
		if (chk[(int)(*base)] == 1)
			return (0);
		chk[(int)(*base)] = 1;
		cnt++;
		base++;
	}
	if (cnt == 0 || cnt == 1)
		return (0);
	return (1);
}

int check_except(int nbr, char *base)
{
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return (1);
	}
	if (nbr < 0)
		write(1, "-", 1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int cnt;
	int val;
	int tmp;
	int print;
	
	tmp = nbr;
	cnt = ft_strlen(base);
	if (check_error(base) == 0)
		return ;
	if (check_except(nbr, base) == 1)
		return ;
	if (nbr < 0)
		write(1, "-", 1);
	val = 1;
	while ((nbr = nbr / cnt) != 0)
	{
		printf("cccc"); ///////////////
		val = val * cnt;
	}
	while (val != 0)
	{
		printf("bbb"); /////////
		print = tmp / val;
		if (print < 0)
			print = print * -1;
		write(1, &base[print], 1);
		tmp = tmp % val;
		val = val / cnt;
	}
}

#include <stdio.h>
#include <limits.h>

int		main(void)
{
	ft_putnbr_base(-123456, "helo");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MIN, "0123456789");
	printf("\n");
	fflush(stdout);
	ft_putnbr_base(INT_MAX, "0123456789");
}
