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
		norminette 
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd Test_case_42/c07/

echo "========== MOVE FILE =========="

for i in $(seq 0 5); do
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
	else
		echo "ex0$i file not exist"
	fi
