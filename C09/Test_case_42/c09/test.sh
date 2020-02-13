#!/bin/bash

clear

echo "# **************************************************************************** #"
echo "#                                                                              #"
echo "#                                                         :::      ::::::::    #"
echo "#    PSC's MOULINETTE.sh                                :+:      :+:    :+:    #"
echo "#                                                     +:+ +:+         +:+      #"
echo "#    By: shpark <shpark@student.42.fr>              +#+  +:+       +#+         #"
echo "#                                                 +#+#+#+#+#+   +#+            #"
echo "#    Created: 2020/01/28 04:12:24 by shpark            #+#    #+#              #"
echo "#    Updated: 2020/01/28 04:12:24 by shpark           ###   ########.fr        #"
echo "#                                                                              #"
echo "# **************************************************************************** #"

echo "========== NORMINETTE  =========="
cd ../../

for i in $(seq 0 2); do
	if [ -d ex0$i ] ; then
		cd ex0$i
		rm -rf main.c
		norminette -R CheckForbiddenSourceHeader | cat
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd Test_case_42/c09/

echo "========== MOVE FILE =========="

for i in $(seq 1 1); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		cp a.tar ../../../ex0$i/
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

for i in $(seq 2 2); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		cp main.c ../../../ex0$i/
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd ../../

echo "---------- GCC"


if [ -d ex00 ] ; then
	cd ex00/
	echo "========== ex00 ============"
	echo "========= SHELL SCIRPT =========="
	./libft_creator.sh
	echo "========== RESULT =========="
	ar -x libft.a
	if [ -f ft_strcmp.o -a ft_putchar.o -a ft_strlen.o -a ft_putstr.o -a ft_swap.o ] ; then
		echo "libft.a is successfully maded."
	fi
	rm -rf *.o
	rm -rf __.SYMDEF SORTED
	rm -rf libft.a
	cd ../
else
	echo "ex00 file not exist"
fi

if [ -d ex01 ] ; then
	cd ex01/
	echo "========== ex01 ============"
	echo "========= GET READY =========="
	tar -xf a.tar
	echo "========== RESULT =========="
	rm -rf a.tar
	echo "========== make libft.a =========="
	make libft.a
	if [ -f srcs/ft_strcmp.o -a srcs/ft_putchar.o -a srcs/ft_strlen.o -a srcs/ft_putstr.o -a srcs/ft_swap.o -a libft.a ] ; then
		echo "\"make libft.a\" is valid"
	else
		echo "\"make libft.a\" is failed"
	fi
	echo "========== make =========="
	make
	if [ -f srcs/ft_strcmp.o -a srcs/ft_putchar.o -a srcs/ft_strlen.o -a srcs/ft_putstr.o -a srcs/ft_swap.o -a libft.a ] ; then
		echo "\"make\" is valid"
	else
		echo "\"make\" is failed"
	fi
	echo "========== make all =========="
	make all
	if [ -f srcs/ft_strcmp.o -a srcs/ft_putchar.o -a srcs/ft_strlen.o -a srcs/ft_putstr.o -a srcs/ft_swap.o -a libft.a ] ; then
		echo "\"make all\" is valid"
	else
		echo "\"make all\" is failed"
	fi
	echo "========== make clean =========="
	make all
	if [ -f srcs/ft_strcmp.o -a srcs/ft_putchar.o -a srcs/ft_strlen.o -a srcs/ft_putstr.o -a srcs/ft_swap.o -a libft.a ] ; then
		make clean
		if [ -f srcs/ft_strcmp.o -a srcs/ft_putchar.o -a srcs/ft_strlen.o -a srcs/ft_putstr.o -a srcs/ft_swap.o -a libft.a ] ; then
			echo "\"make clean\" is failed"
		else
			echo "\"make clean\" is valid"
		fi
	else
		echo "\"make all\" is failed"
	fi
	echo "========== make fclean =========="
	make all
	if [ -f srcs/ft_strcmp.o -a srcs/ft_putchar.o -a srcs/ft_strlen.o -a srcs/ft_putstr.o -a srcs/ft_swap.o -a libft.a ] ; then
		make fclean
		if [ -f srcs/ft_strcmp.o -a srcs/ft_putchar.o -a srcs/ft_strlen.o -a srcs/ft_putstr.o -a srcs/ft_swap.o -a libft.a ] ; then
			echo "\"make fclean\" is failed"
		else
			echo "\"make fclean\" is valid"
		fi
	else
		echo "\"make all\" is failed"
	fi
	echo "========== make re =========="
	make re
	if [ -f srcs/ft_strcmp.o -a srcs/ft_putchar.o -a srcs/ft_strlen.o -a srcs/ft_putstr.o -a srcs/ft_swap.o -a libft.a ] ; then
		echo "\"make re\" is valid"
	else
		echo "\"make re\" is failed"
	fi
	echo "========== make norm =========="
	make norm
	echo "========== make .PHONY =========="
	make .PHONY
	rm -rf *.o
	rm -rf __.SYMDEF SORTED
	rm -rf libft.a
	rm -rf includes
	rm -rf srcs
	cd ../
else
	echo "ex01 file not exist"
fi

for i in $(seq 2 2); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		echo "========== ex0$i ============"
		echo "========= COMPILE =========="
		gcc -Wall -Wextra -Werror main.c
		chmod +x a.out
		echo "========== RESULT =========="
		./a.out "ImtmVrV6Ov8QrkGGUglBy7Vgsu iIsdl5XyT35Czv4xeu" "yenORYQ"
		echo "=====REAL ANSWER====="
		echo "count occ: 6"
		echo "tab start"
		echo "tab[0]: \$ImtmVrV6$"
		echo "tab[1]: \$v8$"
		echo "tab[2]: \$rkGGUglB$"
		echo "tab[3]: \$7Vgsu iIsdl5X$"
		echo "tab[4]: \$T35Czv4x$"
		echo "tab[5]: \$u$"
		echo "tab end"
		./a.out "XS7PXy0RfSH5tYbuSIg h Rpo6Ghm40A1BNgGaZJNbeIzZ" "D    Scy"
		echo "=====REAL ANSWER====="
		echo "count occ: 6"
		echo "tab start"
		echo "tab[0]: \$X$"
		echo "tab[1]: \$7PX$"
		echo "tab[2]: \$0Rf$"
		echo "tab[3]: \$H5tYbu$"
		echo "tab[4]: \$Ig$"
		echo "tab[5]: \$h$"
		echo "tab[6]: \$Rpo6Ghm40A1BNgGaZJNbeIzZ$"
		echo "tab end"
		./a.out "                    " "     "
		echo "=====REAL ANSWER====="
		echo "count occ: 0"
		echo "tab start"
		echo "tab end"
		./a.out "AaBbCCcDDDdDDDeAAAfEA" "abcdef"
		echo "=====REAL ANSWER====="
		echo "count occ: 6"
		echo "tab start"
		echo "tab[0]: \$A$"
		echo "tab[1]: \$B$"
		echo "tab[2]: \$CC$"
		echo "tab[3]: \$DDD$"
		echo "tab[4]: \$DDD$"
		echo "tab[5]: \$AAA$"
		echo "tab[6]: \$EA$"
		echo "tab end"
		./a.out "    " "     "
		echo "=====REAL ANSWER====="
		echo "count occ: 0"
		echo "tab start"
		echo "tab end"
		./a.out "AAAAA" "A"
		./a.out "bbAbAbbb" "A"
		./a.out "     " " "
		./a.out "a, b, c, d" ""
		./a.out "a, b c d" ", "
		./a.out ",a,b,c," ","
		./a.out ",,," ","
		rm -rf a.out
		rm -rf main.c
		cd ../
		sleep 1;
	else
		echo "ex0$i file not exist"
	fi
done
