/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 04:43:04 by seoh              #+#    #+#             */
/*   Updated: 2020/02/05 04:45:37 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;
	int cnt;

	if (power < 0)
		return (0);
	cnt = 0;
	result = 1;
	while (cnt < power)
	{
		result = result * nb;
		cnt++;
	}
	return (result));
}
