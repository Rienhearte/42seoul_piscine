/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 04:44:32 by seoh              #+#    #+#             */
/*   Updated: 2020/02/11 04:49:08 by seoh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int			*rtn;
	long long	cnt;
	long long	maxn;
	long long	minn;

	minn = min;
	maxn = max;
	if (maxn - minn <= 0)
		return (0);
	rtn = (int*)malloc(sizeof(int) * (maxn - minn));
	if (rtn == 0)
		return (0);
	cnt = 0;
	while (cnt < maxn - minn)
	{
		*rtn = (int)(minn + cnt);
		cnt++;
		rtn++;
	}
	return (rtn - cnt);
}
