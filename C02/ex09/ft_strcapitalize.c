/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 03:42:10 by seoh              #+#    #+#             */
/*   Updated: 2020/01/29 20:44:57 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	a;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		a = str[i - 1];
		if (!((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
					str[i] = str[i] - 32;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
			if (str[i - 1] >= '0' && str[i - 1] <= '9')
				str[i] = str[i] + 32;
		if ((a >= 'A' && a <= 'Z') && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		if ((a >= 'a' && a <= 'z') && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
