/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shpark <shpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 06:49:12 by shpark            #+#    #+#             */
/*   Updated: 2020/02/07 00:38:12 by shpark           ###   ########.fr       */
/*   Updated: 2020/01/30 08:51:04 by shpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_convert_base.c"
#include "ft_convert_base2.c"

int		main(void)
{
	printf("=====CASE01=====\n");
	printf("nbr, base_from, base_to\n");
	printf("2147483647, ");
   	printf("0123456789, ");
   	printf("0123456789abcdef\n");
	printf("result : $%s$\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("real answer : $7fffffff$\n");
	printf("=====CASE02=====\n");
	printf("nbr, base_from, base_to\n");
	printf("---------7fffffff, ");
   	printf("0123456789abcdef, ");
	printf("01\n");
	printf("result : $%s$\n", ft_convert_base("---------7fffffff", "0123456789abcdef", "01"));
	printf("real answer : $-1111111111111111111111111111111$\n");
	printf("=====CASE03=====\n");
	printf("nbr, base_from, base_to\n");
	printf("---+--0001023a, ");
	printf("0123456789, "); 
	printf("0123456789\n");
	printf("result : $%s$\n", ft_convert_base("---+--0001023a", "0123456789", "0123456789"));
	printf("real answer : $-1023$\n");
	printf("=====CASE04=====\n");
	printf("nbr, base_from, base_to\n");
	printf("-0, ");
	printf("0123456789, ");
   	printf("abcdefghij\n");
	printf("result : $%s$\n", ft_convert_base("-0", "0123456789", "abcdefghij"));
	printf("real answer : $a$\n");
	printf("=====CASE05=====\n");
	printf("nbr, base_from, base_to\n");
	printf(" \t\t\t ---+++ff-f, ");
	printf("0123456789abcdef, ");
	printf("0123456789\n");
	printf("result : $%s$\n", ft_convert_base(" \t\t\t ---+++ff-f", "0123456789abcdef", "0123456789"));
	printf("real answer : $-255$\n");
	printf("=====CASE06=====\n");
	printf("nbr, base_from, base_to\n");
	printf("aasdffeessddfffss, ");
	printf("asedf, "); 
	printf("ss\n");
	printf("result : $%s$\n", ft_convert_base("aasdffeessddfffss", "asedf", "ss"));
	printf("real answer : $(null)$\n");
	printf("=====CASE07=====\n");
	printf("nbr, base_from, base_to\n");
	printf("-+-+- -+asdf, ");
   	printf("asdf");
	printf("fdsa\n");
	printf("result : $%s$\n", ft_convert_base("-+-+- -+asdf", "asdf", "fdsa"));
	printf("real answer : $f$\n");
	printf("=====CASE08=====\n");
	printf("nbr, base_from, base_to\n");
	printf("  -+-+- -+asdf, ");
	printf("ai sdf, ");
	printf("fdsa\n");
	printf("result : $%s$\n", ft_convert_base("  -+-+- -+asdf", "ai sdf", "fdsa"));
	printf("real answer : $(null)$\n");
	printf("=====CASE09=====\n");
	printf("nbr, base_from, base_to\n");
	printf("\t\t\t\t \v --++-asdf, ");
   	printf("asdf, ");
   	printf("fd-as\n");
	printf("result : $%s$\n", ft_convert_base("\t\t\t\t \v --++-asdf", "asdf", "fd-as"));
	printf("real answer : $(null)$\n");
	printf("=====CASE10=====\n");
	printf("nbr, base_from, base_to\n");
	printf("   -+a, ");
	printf("abcde, ");
	printf("\"\"\n");
	printf("result : $%s$\n", ft_convert_base("   -+a", "abcde", ""));
	printf("real answer : $(null)$\n");
	printf("=====CASE11=====\n");
	printf("nbr, base_from, base_to\n");
	printf(" -+a, ");
	printf("\"\", ");
   	printf("df");
	printf("result : $%s$\n", ft_convert_base(" -+a", "", "df"));
	printf("real answer : $(null)$\n");
}
