/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 03:39:33 by seoh              #+#    #+#             */
/*   Updated: 2020/02/05 04:07:19 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int idx;

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