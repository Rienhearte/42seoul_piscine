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

for i in $(seq 0 9); do
	if [ -d ex0$i ] ; then
		cd ex0$i
		rm -rf main.c
		norminette 
		cd ../
	else
		 echo "ex0$i file not exist"
	fi
done

for i in $(seq 10 12); do
	if [ -d ex$i ] ; then
		cd ex$i
		rm -rf main.c
		norminette
		cd ../
	else
		echo "ex$i file not exist"
	fi
done

cd Test_case_42/c02/

cd ex11
cp blah.bin ../../../ex11
cd ../

echo "========== MOVE FILE =========="

for i in $(seq 0 9); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		cp main.c ../../../ex0$i/
		cd ../
	else
		 echo "ex0$i file not exist"
	fi
done

for i in $(seq 10 12); do
	if [ -d ex$i ] ; then
		cd ex$i/
		cp main.c ../../../ex$i/
		cd ../
	else
		 echo "ex$i file not exist"
	fi
done

cd ../../

echo "---------- GCC"

for i in $(seq 0 9); do
	if [ -d ex0$i ] ; then
		cd ex0$i/
		echo "========== ex0$i ============"
		echo "========= COMPILE =========="
		gcc -Wall -Wextra -Werror main.c
		chmod +x a.out
		echo "========== RESULT =========="
		./a.out
		rm -rf a.out
		cd ../
	else
		 echo "ex0$i file not exist"
	fi
done
for i in $(seq 10 12); do
	if [ -d ex$i ] ; then
		cd ex$i/
		echo "========== ex$i ============"
		echo "========= COMPILE =========="
		gcc -Wall -Wextra -Werror main.c
		chmod +x a.out
		echo "========== RESULT =========="
		./a.out
		rm -rf a.out
		rm -rf main.c
		cd ../
	else
		 echo "ex$i file not exist"
	fi
done

