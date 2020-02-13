/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 04:46:56 by shpark            #+#    #+#             */
/*   Updated: 2020/01/30 08:44:57 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_putstr_non_printable.c"

int		main(void)
{
	char	*buffer;
	long	length;
	FILE	*f;
	char	*string;

	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
	printf("\n");
	
	buffer = 0;
	f = fopen("blah.bin", "rb");
	if (f)
	{
		fseek(f, 0, SEEK_END);
		length = ftell(f);
		fseek(f, 0, SEEK_SET);
		buffer = malloc(length);
		if (buffer)
		{
			fread(buffer, 1, length, f);
		}
		fclose(f);
	}
	ft_putstr_non_printable(buffer);
	printf("\n");
}
