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

for i in $(seq 0 3); do
	if [ -d ex0$i ] ; then
		cd ex0$i
		rm -rf main.c
		norminette -R CheckForbiddenSourceHeader | cat
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd Test_case_42/c10/

echo "========== MOVE FILE =========="

for i in $(seq 2 2); do
	if [ -d ex0$i ] ; then
		cd ex0$i/tests
		cp * ../../../../ex0$i/
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd ../../../
pwd

echo "---------- GCC"

for i in $(seq 0 0); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		echo "========== ex0$i ============"
		echo "========= MAKE =========="
		make
		make fclean
		make all
		make clean
		make fclean
		make all	
		echo "========== RESULT =========="
		./ft_display_file
		echo "REAL ANSWER : File name missing."
		./ft_display_file Makefile a
		echo "REAL ANSWER : Too many arguments."
		./ft_display_file a
		echo "REAL ANSWER : Cannot read file."
		./ft_display_file Makefile
		make fclean
		rm -rf ft_display_file
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

for i in $(seq 1 1); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		echo "========== ex0$i ============"
		echo "========= MAKE =========="
		make
		make fclean
		make all
		make clean
		make fclean
		make all	
		echo "========== RESULT =========="
		./ft_cat Makefile a
		./ft_cat a
		./ft_cat Makefile
		make fclean
		rm -rf ft_cat
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

for i in $(seq 2 2); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		echo "========== ex0$i ============"
		echo "========= MAKE =========="
		make
		make fclean
		make all
		make clean
		make fclean
		make all	
		echo "========== RESULT =========="
		./ft_tail Makefile a
		./ft_tail a
		./ft_tail Makefile
		make fclean
		rm -rf ft_tail
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

for i in $(seq 3 3); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		echo "========== ex0$i ============"
		echo "========= MAKE =========="
		make
		make fclean
		make all
		make clean
		make fclean
		make all	
		echo "========== RESULT =========="
		./ft_hexdump Makefile a
		./ft_hexdump a
		./ft_hexdump Makefile
		make fclean
		rm -rf ft_hexdump
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done
