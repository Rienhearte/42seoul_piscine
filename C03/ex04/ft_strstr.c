/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:56:03 by seoh              #+#    #+#             */
/*   Updated: 2020/01/30 17:54:20 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char i;
	char j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (1)
			{
				if (to_find[j] == '\0')
					return ((char *)i);
				if (!(str[i + j] == to_find[j]))
					break;
				j++;
			}
		}
		i++;
	}
	return (0);	
}

#include <stdio.h>
int main()
{
	char str1[] = "hello world!!!";
	char str2[] = "wor";
	printf("%s",ft_strstr(str1, str2));
}
