/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 23:21:25 by seoh              #+#    #+#             */
/*   Updated: 2020/02/13 23:23:41 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		charset_check(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !(is_charset(str[i], charset)))
		{
			while (str[i] && !(is_charset(str[i], charset)))
				i++;
			cnt++;
		}
	}
	return (cnt);
}

char	*ft_strcpy(char *str, char *charset, int i)
{
	int		cnt;
	char	*dest;

	cnt = 0;
	while (str[i] && !(is_charset(str[i], charset)))
	{
		i++;
		cnt++;
	}
	dest = (char *)malloc(sizeof(char) * (cnt + 1));
	i -= cnt;
	cnt = 0;
	while (str[i] && !(is_charset(str[i], charset)))
		dest[cnt++] = str[i++];
	dest[cnt] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		charset_cnt;
	int		i;
	int		j;
	char	**result;

	charset_cnt = charset_check(str, charset);
	result = (char **)malloc(sizeof(char *) * (charset_cnt + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i] && !(is_charset(str[i], charset)))
		{
			result[j++] = ft_strcpy(str, charset, i);
			while (str[i] && !(is_charset(str[i], charset)))
				i++;
		}
	}
	result[j] = 0;
	return (result);
}
