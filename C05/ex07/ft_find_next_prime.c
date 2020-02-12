/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 04:40:43 by seoh              #+#    #+#             */
/*   Updated: 2020/02/11 06:53:20 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long long idx;

	idx = 2;
	if (nb <= 1)
		return (0);
	while (idx * idx <= nb)
	{
		if (nb % idx == 0)
			return (0);
		idx++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (++nb % 2 == 0)
		nb++;
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb = nb + 1;
	}
}
#include <stdlib.h>
int		main(int c, char *v[])
{
	printf("%d\n", ft_find_next_prime(atoi(v[1])));
	return (0);
}
