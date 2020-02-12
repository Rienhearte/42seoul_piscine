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

for i in $(seq 0 7); do
	if [ -d ex0$i ] ; then
		cd ex0$i
		rm -rf main.c
		norminette -R CheckForbiddenSourceHeader | cat
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd Test_case_42/c11/

echo "========== MOVE FILE =========="

for i in $(seq 0 4); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		cp main.c ../../../ex0$i/
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

for i in $(seq 6 7); do
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

for i in $(seq 0 4); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		echo "========== ex0$i ============"
		echo "========= COMPILE =========="
		gcc -Wall -Wextra -Werror main.c
		chmod +x a.out
		echo "========== RESULT =========="
		./a.out
		rm -rf a.out
		rm -rf main.c
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

if [ -d ex05 ] ; then
	cd ex05/
	echo "========== ex05 ============"
	echo "========= COMPILE =========="
	chmod +x do_op
	echo "========== RESULT =========="
	./do-op
	echo "REAL ANSWER : "
	 ./do-op 1 + 1
	echo "REAL ANSWER : 2"
	./do-op 42amis - --+-20toto12
	echo "REAL ANSWER : 62"
	./do-op 1 p 1
	echo "REAL ANSWER : 0"
	./do-op 1 + toto3
	echo "REAL ANSWER : 1"
	./do-op toto3 + 4
	echo "REAL ANSWER : 4"
	./do-op foo plus bar
	echo "REAL ANSWER : 0"
	./do-op 25 / 0
	echo "REAL ANSWER : Stop : division by zero"
	./do-op 25 % 0
	echo "REAL ANSWER : Stop : modulo by zero"
	cd ../
else
	echo "ex05 file not exist"
fi

for i in $(seq 6 7); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		echo "========== ex0$i ============"
		echo "========= COMPILE =========="
		gcc -Wall -Wextra -Werror main.c
		chmod +x a.out
		echo "========== RESULT =========="
		./a.out
		rm -rf a.out
		rm -rf main.c
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done
