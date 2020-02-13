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
		norminette 
		cd ../
	else
		echo "ex0$i file not exist"
	fi
done

cd Test_case_42/c06/

cd ../../

echo "---------- GCC"

if [ -d ex00 ] ; then
	cd ex00/
	echo "========== ex00 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror ft_print_program_name.c
	chmod +x a.out
	echo "========== RESULT =========="
	./a.out
	rm -rf a.out
	cd ../
else
	echo "ex00 file not exist"
fi
if [ -d ex01 ] ; then
	cd ex01/
	echo "========== ex01 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror ft_print_params.c
	chmod +x a.out
	echo "========== RESULT =========="
	echo "========== TEST 0 =========="
	./a.out  
	echo "========== TEST 1 =========="
	./a.out "ukqygDIWRJiTs"
	echo "========== TEST 2 =========="
	./a.out "EvH9p8OF"
	echo "========== TEST 3 =========="
	./a.out "PZlO csk rujh ypCPF5 O4GFlk1 5TeD fpg nUIOA MUTZ138 GU7T5vIjHe4"
	echo "========== TEST 4 =========="
	./a.out "yYn1QIC0 x Eve7T0h9YtPp lhZA cl1Qz EBU mRjb l8FQh cf0xLvZh4O A78Q5HhE"
	echo "========== TEST 5 =========="
	./a.out "C6VMjvx" "xvPIb" "KYkfbS" "nscIBUTRJw"
	echo "========== TEST 6 =========="
	./a.out "mnx0J" "wOmnh" "obM3Onug0" "7rUNsFAD" "PtTVK8" "OgRWBlLEJ3VT" "w" "tqBiYX" "MeP7XLSbnHg" "zbq2EHA" "bHuQ" "HLAz42oU" "qZFyb"
	echo "========== TEST 7 =========="
	./a.out "K4dzOA" "rIHULt2" "i20ogScb" "h"
	echo "========== TEST 8 =========="
	./a.out "tolh kuFf4UtceR" "58IwP e0ypYBImsVME p DSRxZ1GTuHC" "fOn0VP1vAQBX DUZ 5H fonsdaVYFBZ7" "m3ctiS2pU" "wQcgl bmRKzc6gnBx" "zd0A8aM" "ycrGSQ 9lNHAnFQK" "dBM wLlsXcJ" "fw 6TQ YMcZSowL GnNq" "Bc1oEJ9Z HSLzNrW" "V4T9n8lFm5 HtTxK8Cl G7TE1tAFsZM" "sSfVZ3 rd0AxotRO JsowMKQFRiE" "ez rqole dUs w"
	echo "========== TEST 9 =========="
	./a.out "06zjp aP3z1UFj0u JomOT ReEdZn" "lNCzR KfVNEzISHCL I6rpPAQeX1Cf duS9GtmR" "GN 5UeNIQnW" "XkOv6src a0YwkIst qLROyKMxZ" "yoqB zoUFw ebNg1r" "rT i8wAI4 ih 2gASYBTVps" "dB7 KYbqd37 g3oTGYxMZ48D bkT" "9TBSrm8 vZc6 6 xS2" "Xp6gDc2d5" "xygX7CNf1j2u HjTfFZvsk" "qEI0f UXBVRyr imcJf5hGsbk 6S2EY" "2" "yzN oCnTU MvEckqRyK62A" "IdrnRbvhyug osT53 gkwcuo1YXK" "aQWlcw qzaBOsdn" "Rxd7s64X5DU"
	echo "========== TEST 10 =========="
	./a.out "PaOYqUFr4 Mh1YQFCzEZN zdH 7rZ0DTlVF" "y" "GUtlhmb7 fwlt i9Dd 9lWhyuJ" "kFzlvhf Cw9DYRNedy V dl7" "M7eVt2porBc" "mOc5y4Sp" "2evnJgAQMD WB" "PImN lc8oDX9Q Y n" "dH eOE l" "5fYXqBr" "n 5N" "vDj2sm FIS5GA0oMDV RWE r6sFyvfKgo98" "iIZ Th" "v5jDWqNwS2 8 Tt03 yFc" "B6e8luc2AE7 8kP Eqov5clHIbUe"
	echo "========== TEST 11 =========="
	./a.out "OrwW54 umfXgEM" "VXr sFTlSXO3VGxH N3CVv" "xi9dtGOjoW Q Yt d8IAChQUPWo" "FA94 gsk" "ncBegxs2R" "1CHKkj" "oh skCYpjSOl K"
	echo "========== TEST 12 =========="
	./a.out "Pt" "ClGAdheEQW Gd3" "75NUbDIV3Ar" "82YJuO0xQsg iV10vW35m" "XgyPzsxclW 7PjtGQirB WH47ElSrYO8d jiI4m2tARqgM" "aHwhx9MzNKId q" "gb2 eao39m4hlkRX UK SlgKYb1vLh" "ET03zwQfo IT3nplzPj 0WoXwdK d" "T2WDEKNJLXs E6lWB0G4 P" "BXsC65TOFGe" "0zK4lxJ8mI" "odg5Lf6iqk" "sh2VARf4 0Dfh4GPBrqO cEuGje YCXA1RiEMP" "JMPy2VqD YgBhO frzpby1mDGv" "Wu6 7CM ZOejvl p1R9I8uV5Y"
	echo "========== TEST 13 =========="
	./a.out "ke" "eUWHbQN2ZR u81ZCGoDNwRT a" "ZekhVd03CLlc R0voH" "SQu9X" "t17 bE Ok0W7JpLbj1s VNLuaP" "qx1Y tKM0 zWhesZ3I65DF 1zhUieXlLNSZ" "p3Ux5IcQJe GNtScIBV cCnZo" "gwFRHIBzJe D YyTDF 2NKYqH" "8Qsb05JA" "yFjPad agDE hq6WbnU" "oZGMDY" "PWIr cA4rHf" "zSVRPlb fyqcOEsMn" "2cRey"
	echo "========== TEST 14 =========="
	./a.out "f xTEHIkQui1 cfmnEu" "1eanlL h8ZCHIsD rN0aCoeTs C9z3TL" "xEoBuvHj8AiM SeF5MkT6" "m31e yBaV kw ujqtAI642NY7" "u8IBRWoFG" "RzKmyGWtCZ 6 ACcItvirfGT I1VTs2JAoW0" "5sboSK Zyb8VWDAQJ1 UPJ4eDn" "RFVpZ5 k1" "rfu SrKe4 C9ZIFvtrf 2G1Fpac" "PYoSr"
	echo "========== TEST 15 =========="
	./a.out "lJVMtODR" "DZcA" "bgEHyl QsdhbqpCP 5XMYGvT47P" "NXbD9 t9niIufoBv goimX5z29V ZGh3c4n7U5"
	echo "========== TEST 16 =========="
	./a.out "h8XUebZKS AL" "7hGiNtYzXQjg" "QHq" "C6y8" "Uz knMB2 N70D"
	echo "========== TEST 17 =========="
	./a.out "Z kqblLpirojw R7Ds0jkV" "IUTGZc Pg0sCcKFj6 WY4BA3MjF" "BPhpmFqKT3MY" "c9khbvR" "kNYgy6 1 i 8YBbIWwlJZc" "lzdcRFU KpNi 4uhewWyG IfYDb65TVHi" "KAzi 6P054dsqyocw 48" "PEc3 GDNdbjAO0Ze 1IqXEBo2xZr" "4VuP8g OPBAGTwC PcRAUzbj" "28A6o9DUHGCq LF0lhkvye7 fzHhcXK OsThn" "u1sz8f9 MTqbNU3Y q3vC" "Ruo6kMeChG" "XI6M9 VbGot5HvXC p4hLPG PA0xFal1jb5u" "tNTlhe PI0O7J TDi2" "97UfmP8bMnk" "gR L b8aATF"
	echo "========== TEST 18 =========="
	./a.out "vJNwtMF CvVG0il DgFHjcTG5u9" "4v kn9bY y" "MyV1RWE o tmZf2dyR nvezqasj" "SaQZvYwLE M YBfq5A4eJ39" "edc8Z4RA Zhzo5reu" "jq8tvHeOg" "pLO HiTeO75N L OjDPeyMbLm" "XbeBotx3 NPsmTF1Ubl dlSzU470b1N" "sS68hAoKbj UX" "bp4yc" "vGQB8cZ iyAtsk Du0E 8iYFgH" "2dVKBoA uMq21RI" "mlSXb WqoLR" "Wsdzc7Tn"
	echo "========== TEST 19 =========="
	./a.out "7P2pGtFSaO Gn2lfSOFs" "j4XCr6gai" "zHr9ot m3 skgK UjJundDFcKCM" "VNrs aFWZvg ke" "PKXUkm" "8qfvCLd vOa7FXhDCE" "4JcxV1 THoDY2WtcblV inlXpZmV 0Pc" "If" "D3xsd Un0Sz y g" "t2XEGKSUHDgC o" "7uFwLUX6 2CxZASI Ina4SG68" "my9I7PTlJ5fA L6wST" "Vd1p wbHXQ nHBL" "P5TiV TmMSWQH cjOV" "ZOiE7Qog8 C8Gc jYwbk9u8me" "jR8SUZ TdoOzA r8nd7kO apEd2g0eBK"
	rm -rf a.out
	cd ../
else
	echo "ex01 file not exist"
fi
if [ -d ex02 ] ; then
	cd ex02/
	echo "========== ex02 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror ft_rev_params.c
	chmod +x a.out
	echo "========== RESULT =========="
	echo "========== TEST 0 =========="
	./a.out  
	echo "========== TEST 1 =========="
	./a.out "ukqygDIWRJiTs"
	echo "========== TEST 2 =========="
	./a.out "EvH9p8OF"
	echo "========== TEST 3 =========="
	./a.out "PZlO csk rujh ypCPF5 O4GFlk1 5TeD fpg nUIOA MUTZ138 GU7T5vIjHe4"
	echo "========== TEST 4 =========="
	./a.out "yYn1QIC0 x Eve7T0h9YtPp lhZA cl1Qz EBU mRjb l8FQh cf0xLvZh4O A78Q5HhE"
	echo "========== TEST 5 =========="
	./a.out "C6VMjvx" "xvPIb" "KYkfbS" "nscIBUTRJw"
	echo "========== TEST 6 =========="
	./a.out "mnx0J" "wOmnh" "obM3Onug0" "7rUNsFAD" "PtTVK8" "OgRWBlLEJ3VT" "w" "tqBiYX" "MeP7XLSbnHg" "zbq2EHA" "bHuQ" "HLAz42oU" "qZFyb"
	echo "========== TEST 7 =========="
	./a.out "K4dzOA" "rIHULt2" "i20ogScb" "h"
	echo "========== TEST 8 =========="
	./a.out "tolh kuFf4UtceR" "58IwP e0ypYBImsVME p DSRxZ1GTuHC" "fOn0VP1vAQBX DUZ 5H fonsdaVYFBZ7" "m3ctiS2pU" "wQcgl bmRKzc6gnBx" "zd0A8aM" "ycrGSQ 9lNHAnFQK" "dBM wLlsXcJ" "fw 6TQ YMcZSowL GnNq" "Bc1oEJ9Z HSLzNrW" "V4T9n8lFm5 HtTxK8Cl G7TE1tAFsZM" "sSfVZ3 rd0AxotRO JsowMKQFRiE" "ez rqole dUs w"
	echo "========== TEST 9 =========="
	./a.out "06zjp aP3z1UFj0u JomOT ReEdZn" "lNCzR KfVNEzISHCL I6rpPAQeX1Cf duS9GtmR" "GN 5UeNIQnW" "XkOv6src a0YwkIst qLROyKMxZ" "yoqB zoUFw ebNg1r" "rT i8wAI4 ih 2gASYBTVps" "dB7 KYbqd37 g3oTGYxMZ48D bkT" "9TBSrm8 vZc6 6 xS2" "Xp6gDc2d5" "xygX7CNf1j2u HjTfFZvsk" "qEI0f UXBVRyr imcJf5hGsbk 6S2EY" "2" "yzN oCnTU MvEckqRyK62A" "IdrnRbvhyug osT53 gkwcuo1YXK" "aQWlcw qzaBOsdn" "Rxd7s64X5DU"
	echo "========== TEST 10 =========="
	./a.out "PaOYqUFr4 Mh1YQFCzEZN zdH 7rZ0DTlVF" "y" "GUtlhmb7 fwlt i9Dd 9lWhyuJ" "kFzlvhf Cw9DYRNedy V dl7" "M7eVt2porBc" "mOc5y4Sp" "2evnJgAQMD WB" "PImN lc8oDX9Q Y n" "dH eOE l" "5fYXqBr" "n 5N" "vDj2sm FIS5GA0oMDV RWE r6sFyvfKgo98" "iIZ Th" "v5jDWqNwS2 8 Tt03 yFc" "B6e8luc2AE7 8kP Eqov5clHIbUe"
	echo "========== TEST 11 =========="
	./a.out "OrwW54 umfXgEM" "VXr sFTlSXO3VGxH N3CVv" "xi9dtGOjoW Q Yt d8IAChQUPWo" "FA94 gsk" "ncBegxs2R" "1CHKkj" "oh skCYpjSOl K"
	echo "========== TEST 12 =========="
	./a.out "Pt" "ClGAdheEQW Gd3" "75NUbDIV3Ar" "82YJuO0xQsg iV10vW35m" "XgyPzsxclW 7PjtGQirB WH47ElSrYO8d jiI4m2tARqgM" "aHwhx9MzNKId q" "gb2 eao39m4hlkRX UK SlgKYb1vLh" "ET03zwQfo IT3nplzPj 0WoXwdK d" "T2WDEKNJLXs E6lWB0G4 P" "BXsC65TOFGe" "0zK4lxJ8mI" "odg5Lf6iqk" "sh2VARf4 0Dfh4GPBrqO cEuGje YCXA1RiEMP" "JMPy2VqD YgBhO frzpby1mDGv" "Wu6 7CM ZOejvl p1R9I8uV5Y"
	echo "========== TEST 13 =========="
	./a.out "ke" "eUWHbQN2ZR u81ZCGoDNwRT a" "ZekhVd03CLlc R0voH" "SQu9X" "t17 bE Ok0W7JpLbj1s VNLuaP" "qx1Y tKM0 zWhesZ3I65DF 1zhUieXlLNSZ" "p3Ux5IcQJe GNtScIBV cCnZo" "gwFRHIBzJe D YyTDF 2NKYqH" "8Qsb05JA" "yFjPad agDE hq6WbnU" "oZGMDY" "PWIr cA4rHf" "zSVRPlb fyqcOEsMn" "2cRey"
	echo "========== TEST 14 =========="
	./a.out "f xTEHIkQui1 cfmnEu" "1eanlL h8ZCHIsD rN0aCoeTs C9z3TL" "xEoBuvHj8AiM SeF5MkT6" "m31e yBaV kw ujqtAI642NY7" "u8IBRWoFG" "RzKmyGWtCZ 6 ACcItvirfGT I1VTs2JAoW0" "5sboSK Zyb8VWDAQJ1 UPJ4eDn" "RFVpZ5 k1" "rfu SrKe4 C9ZIFvtrf 2G1Fpac" "PYoSr"
	echo "========== TEST 15 =========="
	./a.out "lJVMtODR" "DZcA" "bgEHyl QsdhbqpCP 5XMYGvT47P" "NXbD9 t9niIufoBv goimX5z29V ZGh3c4n7U5"
	echo "========== TEST 16 =========="
	./a.out "h8XUebZKS AL" "7hGiNtYzXQjg" "QHq" "C6y8" "Uz knMB2 N70D"
	echo "========== TEST 17 =========="
	./a.out "Z kqblLpirojw R7Ds0jkV" "IUTGZc Pg0sCcKFj6 WY4BA3MjF" "BPhpmFqKT3MY" "c9khbvR" "kNYgy6 1 i 8YBbIWwlJZc" "lzdcRFU KpNi 4uhewWyG IfYDb65TVHi" "KAzi 6P054dsqyocw 48" "PEc3 GDNdbjAO0Ze 1IqXEBo2xZr" "4VuP8g OPBAGTwC PcRAUzbj" "28A6o9DUHGCq LF0lhkvye7 fzHhcXK OsThn" "u1sz8f9 MTqbNU3Y q3vC" "Ruo6kMeChG" "XI6M9 VbGot5HvXC p4hLPG PA0xFal1jb5u" "tNTlhe PI0O7J TDi2" "97UfmP8bMnk" "gR L b8aATF"
	echo "========== TEST 18 =========="
	./a.out "vJNwtMF CvVG0il DgFHjcTG5u9" "4v kn9bY y" "MyV1RWE o tmZf2dyR nvezqasj" "SaQZvYwLE M YBfq5A4eJ39" "edc8Z4RA Zhzo5reu" "jq8tvHeOg" "pLO HiTeO75N L OjDPeyMbLm" "XbeBotx3 NPsmTF1Ubl dlSzU470b1N" "sS68hAoKbj UX" "bp4yc" "vGQB8cZ iyAtsk Du0E 8iYFgH" "2dVKBoA uMq21RI" "mlSXb WqoLR" "Wsdzc7Tn"
	echo "========== TEST 19 =========="
	./a.out "7P2pGtFSaO Gn2lfSOFs" "j4XCr6gai" "zHr9ot m3 skgK UjJundDFcKCM" "VNrs aFWZvg ke" "PKXUkm" "8qfvCLd vOa7FXhDCE" "4JcxV1 THoDY2WtcblV inlXpZmV 0Pc" "If" "D3xsd Un0Sz y g" "t2XEGKSUHDgC o" "7uFwLUX6 2CxZASI Ina4SG68" "my9I7PTlJ5fA L6wST" "Vd1p wbHXQ nHBL" "P5TiV TmMSWQH cjOV" "ZOiE7Qog8 C8Gc jYwbk9u8me" "jR8SUZ TdoOzA r8nd7kO apEd2g0eBK"
	rm -rf a.out
	cd ../
else
	echo "ex02 file not exist"
fi
if [ -d ex03 ] ; then
	cd ex03/
	echo "========== ex03 ============"
	echo "========= COMPILE =========="
	gcc -Wall -Wextra -Werror ft_sort_params.c
	chmod +x a.out
	echo "========== RESULT =========="
	echo "========== TEST 0 =========="
	./a.out 
	echo "========== TEST 1 =========="
	./a.out "lPUZqb" 
	echo "========== TEST 2 =========="
	./a.out "xvHMiygt"
	echo "========== TEST 3 =========="
	./a.out "7W8osl0 z4k8 53pVi2Jy omEfY w0CjUNK I1 q"
	echo "========== TEST 4 =========="
	./a.out "KUCz47cLi E1mBbhSJCq 9ToZRS YOvZqAo3zBd 27k 3KJrRpX lsZnyAVqi4cd cvUbJq3nNA YsKt2ERF5nBS U8rs 5mM on3mcvxtCW6M pTkjuW y"
	echo "========== TEST 5 =========="
	./a.out "UR" "AoVf9" "3RSbhqiJF" "JSd" "c46stObV7" "LXAm" "4wUXA" "hOE7yX9vHJb" "xs4VzW0" "IADZ4ke2T" "UY1zWNuewZ" "wCXsnPH0eV" "CX" "trdSL74C6"
	echo "========== TEST 6 =========="
	./a.out "Hm17CkVYBFc8" "Q6vVCj8cMo" "1PAJt3d" "Y"
	echo "========== TEST 7 =========="
	./a.out "pKu9w72eBN0Q APv0RXcG t7zhObaJm" "N LA2JNQwCf8o7 XzTulm Ux16NomSFs43" "oKPLr354 jZ jvNmFx5b nAL" "1HjlDsgY7W Przc X d" "IoBXUwWt o7Z" "SZIoMe2cj4qB hknr7Z Y" "8g74e3uN VIu12RM5XGj M2E8a M" "kFfnD1o 0" "jBNzuCZEY3kr Mvw lp viBhm" "r8TiOBW qwcHuOy7" "qlVRbv u v7i" "YKdlRbPJ sCpVIfoWhtSv qwe37MAUzi h5H" "m6Mowzp 1BkfIHt CSXBNkyor lrXA1dQF" "xHA8BIzUlDpu odaRmh uAdOk0PJZR q" "2mfr S" "A8 nvrEbXlo jg"
	echo "========== TEST 8 =========="
	./a.out "QouJU36YKbAy k" "9hlmr dZ 2yqnK4UC1rhm IhFPU" "o6N0kd5" "7UIn0Zo S" "iRvwTEU kXl dZALo8X bIlz" "F MCWtawzOP"
	echo "========== TEST 9 =========="
	./a.out "QqFlHuR GzLRJviS5k yc8zv Xxj" "TEL0P7K" "R9bXKp" "f" "fH4zbpio 0O QaOSxy3su4N wIUZCy" "vlK2yV"
	echo "========== TEST 10 =========="
	./a.out "zI7THZC 1EAIkRGX tCiTxWhVHr91 dlmaxsE9" "fVpxezX5dvM XKZ mF0j GjlAqYg" "v3bpQYrDy" "8TXaKJgFV2" "Dk" "EO v63e 5w" "pJVc" "Lkib" "XiHathsM9bB" "hMVKWt4 Hy9EUfjFYz" "CGu2zBJIs4pT KqOx7I4dZG xYXyEcNovFK"
	echo "========== TEST 11 =========="
	./a.out "ShqNKUMRt3X 9ojNXf2SmY b5tiN0zqKAck bU" "3jiF X9Diqt hbi 9M1O2ud3RH" "yXSGPVjpCkQx 2IqWF" "fxW MBtnsupkxgGv 02eGO agGWpvJBDc"
	echo "========== TEST 12 =========="
	./a.out "4AoHnI gMYW9O KdwGPg7 s" "GBAYLUraChX a8dqM6W0f pCHhEoV eC2zWIEnB" "IaOrDPAko kCfvnUHTQlI yaX" "ixOFLSlvDMd xNlRJOY" "vUC48tzAH95" "fYIM7wF8ZU" "i8xEvFzwT6 0DzMK GXl6 xA54p" "0SoXwi N8msSbdoTJ ALqlipxa0f xd7G" "MSfYa7rFOE W" "7 X4F PvDLY3FNWe" "avDrdZ7HOyGJ LRvD84zjmkp ts"
	echo "========== TEST 13 =========="
	./a.out "" "a" "" "AaA" "" "aB" "b" "B" "" "BB" "A" "aB" "Bb" "" "AAb" "aAB" "Ab" "ba" "ABb" "AAB" "a" "" "" "B" "a" "b" "" "" "" "AB" "BAA" "" "AAb" "BaA" "baA" "B" "BB" "bAb" "BAA"
	echo "========== TEST 14 =========="
	./a.out "BBb" "" "" "Bba" "B" "" "bB" "B" "" "BbB" "BbA" "" "" "aab" "" "Ab" "aB" "aAb" "bBb" "aA"
	echo "========== TEST 15 =========="
	./a.out "" "a" "a" "" "AAB" "" "" "" "BA" "a" "aBB" "AB" "" "bA" "B" "" "" "" "ABb" "b" "Ab" "Ba" "B" "" "" "a" "BBb" "A" "BbB" "" "bBB" "Aa" "BbA" "aaA" "Bb" "Ab" "A"
	echo "========== TEST 16 =========="
	./a.out "" "A" "" "AaA" "" "a" "" "baA" "aba" "" "" "" "" "Aa" "aAA" "" "AAB" "a" "AB" "" "A" "" "" "aab" "" "A" "Aa" "baa" "Abb" "AA"
	echo "========== TEST 17 =========="
	./a.out "aBb" "Ab" "" "BB" "" "Ab" "AAB" "aA" "bA" "B" "B" "" "AaA" "AA" "bBb" "A" "abB" "BBa" "A" "BB" "" "BA" "aAb" "Ab" "a" "aB" "B" "A" "B" "" "b" "B" "" "bB" "AaB" "" "b" "A" "bBb"
	echo "========== TEST 18 =========="
	./a.out "" "aAA" "Aba" "Aaa" "" "bAa" "a" "Ab" "b" "" "a" "" "ABB" "a"
	echo "========== TEST 19 =========="
	./a.out "B" "" "bBB" "" "" "Bb" "a" "BAb" "A" "bbb" "Ab" "" "bB" "aBb" "aBa" "Aa" "B" "B" "" "bBA" "a" "ab" "B" "AaB" "bB" "BBA" "b" "AA" "A" "a" "aAB" "" "" "" "bb" "" "" "AA" "B"
	rm -rf a.out
	cd ../
else
	echo "ex03 file not exist"
fi

