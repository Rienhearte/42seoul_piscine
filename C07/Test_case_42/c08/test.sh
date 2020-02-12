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

for i in $(seq 0 5); do
	if [ -d ex0$i ] ; then
		cd ex0$i
		rm -rf main.c
		norminette | cat
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd Test_case_42/c08/

echo "========== MOVE FILE =========="

if [ -d ex00 ] ; then
	cd ex00
	cp main.c ../../../ex00/
	cp ft.c ../../../ex00/
	cd ../
else
	echo "ex04 file not exist"
fi

for i in $(seq 1 3); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		cp main.c ../../../ex0$i/
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

if [ -d ex04 ] ; then
	cd ex04
	cp main.c ../../../ex04/
	cp main1.c ../../../ex04/
	cp ft_stock_str.h ../../../ex04/
	cd ../
else
	echo "ex04 file not exist"
fi

if [ -d ex05 ] ; then
	cd ex05/
	cp main.c ../../../ex05/
	cp main1.c ../../../ex05/
	cp ft_stock_str.h ../../../ex05/
	cd ../../../ex04
	cp ft_strs_to_tab.c ../ex05
	cd ../Test_case_42/c08
else
	echo "ex05 file not exist"
fi

cd ../../

echo "---------- GCC"

if [ -d ex00 ] ; then
	cd ex00
	echo "========== ex00 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror ft.c main.c
	chmod +x a.out
	echo "========== RESULT =========="
	./a.out
	rm -rf a.out
	rm -rf main.c
	rm -rf ft.c
	cd ../
else
	echo "ex00 file not exist"
fi

if [ -d ex01 ] ; then
	cd ex01
	echo "========== ex01 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror main.c
	chmod +x a.out
	echo "========== RESULT =========="
	echo "========YOUR ANSWER======="
	./a.out
	./a.out 1
	echo "========REAL ANSWER======="
	echo "I have an even number of arguments."
	echo "I have an odd number of arguments."
	rm -rf a.out
	rm -rf main.c
	cd ../
else
	echo "ex01 file not exist"
fi

if [ -d ex02 ] ; then
	cd ex02
	echo "========== ex02 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror main.c
	chmod +x a.out
	echo "========== RESULT =========="
	echo "========YOUR ANSWER======="
	./a.out 
	echo "========REAL ANSWER======="
	echo "macros::abs(-5) = 5"
	echo "macros::abs(-4) = 4"
	echo "macros::abs(-3) = 3"
	echo "macros::abs(-2) = 2"
	echo "macros::abs(-1) = 1"
	echo "macros::abs(0) = 0"
	echo "macros::abs(1) = 1"
	echo "macros::abs(2) = 2"
	echo "macros::abs(3) = 3"
	echo "macros::abs(4) = 4"
	rm -rf a.out
	rm -rf main.c
	cd ../
else
	echo "ex02 file not exist"
fi

if [ -d ex03 ] ; then
	cd ex03
	echo "========== ex03 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror main.c
	chmod +x a.out
	echo "========== RESULT =========="
	echo "========YOUR ANSWER======="
	./a.out
	echo "If you have no error, OK"
	echo "========REAL ANSWER======="
	echo "If you have no error, OK"
	rm -rf a.out
	rm -rf main.c
	cd ../
else
	echo "ex01 file not exist"
fi

if [ -d ex04 ] ; then
	cd ex04
	echo "========== ex04 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror main.c
	chmod +x a.out
	echo "========== RESULT =========="
	./a.out
	rm -rf a.out
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror main1.c
	chmod +x a.out
	echo "========== RESULT =========="
	./a.out
	rm -rf a.out
	rm -rf main.c
	rm -rf main1.c
	rm -rf ft_stock_str.h
	cd ../
else
	echo "ex01 file not exist"
fi

if [ -d ex05 ] ; then
	cd ex05
	echo "========== ex05 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror main.c
	chmod +x a.out
	echo "========== RESULT =========="
	echo "========YOUR ANSWER======="
	./a.out
	rm -rf a.out
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror main1.c
	chmod +x a.out
	echo "========== RESULT =========="
	echo "========YOUR ANSWER======="
	./a.out
	echo "========REAL ANSWER======="
	echo "./a.out"
	echo "7"
	echo "./a.out"
	rm -rf a.out
	rm -rf main.c
	rm -rf main1.c
	rm -rf ft_stock_str.h
	rm -rf ft_strs_to_tab.c
	cd ../
else
	echo "ex01 file not exist"
fi
