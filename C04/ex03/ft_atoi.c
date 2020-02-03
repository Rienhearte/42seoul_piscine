/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/03 05:49:15 by seoh              #+#    #+#             */
/*   Updated: 2020/02/03 17:58:58 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int sign_check(int sign_count)
{
	if(sign_count % 2 == 1)
		return (-1);
	return 0;
}

int ft_atoi(char *str)
{
	int sign_count;
	int value;

	value = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r' ||  *str == ' ')
			str++;
	while (*str == '-' || *str == '+')
	{
		str++;
		if(*str == '-')
			sign_count++;
	}
	while(*str >= '0' && *str <= '9')
	{
		value = value * 10;
		value = value + *str - 48;
		str++;
	}
	return (sign_check(sign_count) * value);
}

int main()
{
	char a[] = "   +++-+-+-+++-29018231";
	printf("%d", ft_atoi(a));
}	
