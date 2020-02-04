/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 05:49:15 by seoh              #+#    #+#             */
/*   Updated: 2020/02/04 15:49:17 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sign_check(int sign_count)
{
	if (sign_count % 2 == 1)
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int sign_count;
	int value;

	sign_count = 0;
	value = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = value * 10;
		value = value + *str - 48;
		str++;
	}
	return (sign_check(sign_count) * value);
}
