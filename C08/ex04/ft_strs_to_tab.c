/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:56:41 by seoh              #+#    #+#             */
/*   Updated: 2020/02/12 17:41:41 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

char				*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			cnt;

	cnt = 0;
	if (!(arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (cnt < ac)
	{
		arr[cnt].str = av[cnt];
		arr[cnt].size = ft_strlen(av[cnt]);
		arr[cnt].copy = ft_strdup(av[cnt]);
		cnt++;
	}
	arr[cnt].str = 0;
	return (arr);
}
