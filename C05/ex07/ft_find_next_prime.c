/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 04:40:43 by seoh              #+#    #+#             */
/*   Updated: 2020/02/05 08:09:03 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long idx;

	idx = 2;
	if (nb <= 1)
		return (0);
	while (idx <= (nb / 2))
	{
		if (nb % idx == 0)
			return (0);
		idx++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
}
