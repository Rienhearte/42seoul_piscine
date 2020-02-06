/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 13:35:28 by seoh              #+#    #+#             */
/*   Updated: 2020/02/06 15:16:23 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

void	ft_sort_string(char *str[], int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (ft_strcmp(str[j], str[j + 1]) < 0)
			{
				tmp = str[j + 1];
				str[j + 1] = str[j];
				str[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char *argv[])
{
	int cnt;

	ft_sort_string(argv + 1, argc - 1);
	cnt = argc - 1;
	while (cnt > 0)
	{
		putstr(argv[cnt]);
		write(1, "\n", 1);
		cnt--;
	}
}
