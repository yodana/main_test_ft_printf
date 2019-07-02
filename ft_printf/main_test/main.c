/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charles <charles@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 10:45:37 by chcoutur          #+#    #+#             */
/*   Updated: 2019/06/21 17:31:31 by charles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"
#include <limits.h>
#include <float.h>
#include <math.h>



int		main()
{
	// char *str = "salut";
	//  char c = 'a';
	int d = 56432;
	double nb = 45.258;
 	// int d_octal = 42;
	// unsigned short us_octal = 0;
	
// 	short s = -247;
// 	 long int e = 9223372036854775807;
	
// 	long long int f = -4294967295;
 	// ft_printf("\n\033[0;33mYOUR>\t\033[0m[%6.pa]\n", NULL);
 	// printf("\033[0;31mREAL>\t\033[0m[%6.pa]\n", NULL);
	// ft_printf("\n\033[0;33mYOUR>\t\033[0m[%+010.d]\n", -0);
    // printf("\033[0;31mREAL>\t\033[0m[%+010.d]\n", -0);
	// printf("[%+#25.0Lf]\n",nb);
	// ft_printf("[%+#25.0Lf]\n", nb);
   	// ft_printf("max int :  %d|\n", INT16_MAX);
    // printf("max int :  %d|\n", INT16_MAX);
    // ft_printf("min int :  %d|\n", INT16_MIN);
    // printf("min int :  %d|\n", INT16_MIN);
    // ft_printf("max int :  %d|\n", INT32_MAX);
    // printf("max int :  %d|\n", INT32_MAX);
    // ft_printf("min int :  %d|\n", INT32_MIN);
    // printf("min int :  %d|\n", INT32_MIN);
    // ft_printf("max long :  %ld|\n", LONG_MAX);
    // printf("max long :  %ld|\n", LONG_MAX);
    // ft_printf("min long :  %ld|\n", LONG_MIN);
    // printf("min long :  %ld|\n", LONG_MIN);
    // ft_printf("max long long :  %lld|\n", __LONG_LONG_MAX__);
    // printf("max long long :  %lld|\n", __LONG_LONG_MAX__);
    // ft_printf("min long long :  %lld|\n",LLONG_MIN);
    // printf("min long long :  %lld|\n",LLONG_MIN);

	
    // ft_printf("test basique:%s\n", str);
    // printf("test basique:%s\n", str);
	// ft_printf("test basique:[%42.2s]\n", str);
    // printf("test basique:[%42.2s]\n", str);
    // ft_printf("precision / zero:%.0s\n", str);
    // printf("precision / zero:%.0s\n", str);
    // ft_printf("precision / petite:%.2s\n", str);
    // printf("precision / petite:%.2s\n", str);
    // ft_printf("precision / grande:[%.15s]\n", str);
    // printf("precision / grande:[%.15s]\n", str);
    // ft_printf("prec + minus:%-.5s\n", str);
    // printf("prec + minus:%-.5s\n", str);
    // ft_printf("size / petite:%5s\n", str);
    // printf("size / petite:%5s\n", str);
    // ft_printf("size / grande:%15s\n", str);
    // printf("size / grande:%15s\n", str);
    // ft_printf("Minus + size / petite:%-5s\n", str);
    // printf("Minus + size / petite:%-5s\n", str);
    // ft_printf("Minus + size / grande:%-15s\n", str);
    // printf("Minus + size / grande:%-15s\n", str);
    // ft_printf("Minus + size + prec:%-15.5s\n", str);
    // printf("Minus + size + prec:%-15.5s\n", str);
    // ft_printf("NULL:%12s\n", NULL);
    // printf("NULL:%12s\n", NULL);
    // ft_printf("NULL:%1s\n", NULL);
    // printf("NULL:%1s\n", NULL);
    // ft_printf("NULL:%-5.6s\n", NULL);
    // printf("NULL:%-5.6s\n", NULL);
    // ft_printf("NULL:%-.8s\n", NULL);
    // printf("NULL:%-.8s\n", NULL);
    // ft_printf("NULL:%.12s\n", NULL);
    // printf("NULL:%.12s\n", NULL);
    // ft_printf("empty:%-.5s\n", "");
    // printf("empty:%-.5s\n", "");
    // ft_printf("empty:%-1.32s\n", "");
    // printf("empty:%-1.32s\n", "");
    // ft_printf("empty:%1.4s\n", "");
    // printf("empty:%1.4s\n", "");
    // ft_printf("empty:%23s\n", "");
    // printf("empty:%23s\n", "");


// /*
// 	****************************************
// 				START STR TEST
// 	*****************************************
// */



// 	printf("***************************************\n");
// 	printf ("\t\tSTR TEST\n");
// 	printf("***************************************\n\n");

	// ft_printf("ft_printf:\t[%s]\n", str);
	// printf("printf:\t\t[%s]\n", str);
	// ft_printf("ft_printf:\t[%-s]\n", str);
	// printf("printf:\t\t[%-s]\n", str);
	// ft_printf("ft_printf:\t[%24s]\n", str);
	// printf("printf:\t\t[%24s]\n", str);
	// ft_printf("ft_printf:\t[%2s]\n", str);
	// printf("printf:\t\t[%2s]\n", str);
	// ft_printf("ft_printf:\t[%-24s]\n", str);
	// printf("printf:\t\t[%-24s]\n", str);
	// ft_printf("ft_printf:\t[%-2s]\n", str);
	// printf("printf:\t\t[%-2s]\n", str);
	// ft_printf("ft_printf:\t[%.54s]\n", str);
	// printf("printf:\t\t[%.54s]\n", str);
	// ft_printf("ft_printf:\t[%.2s]\n", str);
	// printf("printf:\t\t[%.2s]\n", str);
	// ft_printf("ft_printf:\t[%24.2s]\n", str);
	// printf("printf:\t\t[%24.2s]\n", str);
	// ft_printf("ft_printf:\t[%24.54s]\n", str);
	// printf("printf:\t\t[%24.54s]\n", str);
	// ft_printf("ft_printf:\t[%2.2s]\n", str);
	// printf("printf:\t\t[%2.2s]\n", str);
	// ft_printf("ft_printf:\t[%2.54s]\n", str);
	// printf("printf:\t\t[%2.54s]\n", str);
	// ft_printf("ft_printf:\t[%-24.2s]\n", str);
	// printf("printf:\t\t[%-24.2s]\n", str);
	// ft_printf("ft_printf:\t[%-24.54s]\n", str);
	// printf("printf:\t\t[%-24.54s]\n", str);
	// ft_printf("ft_printf:\t[%-.54s]\n", str);
	// printf("printf:\t\t[%-.54s]\n", str);
	// ft_printf("ft_printf:\t[%-.2s]\n", str);
	// printf("printf:\t\t[%-.2s]\n", str);


// /*
// 	****************************************
// 				END STR TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				START CHAR TEST
// 	*****************************************
// */

	// printf("\n\n***************************************\n");
	// printf ("\t\tCHAR TEST\n");
	// printf("***************************************\n\n");

	// ft_printf("ft_printf:\t[%c]\n", c);
	// printf("printf:\t\t[%c]\n", c);
	// ft_printf("ft_printf:\t[%-c]\n", c);
	// printf("printf:\t\t[%-c]\n", c);
	// ft_printf("ft_printf:\t[%1c]\n", c);
	// printf("printf:\t\t[%1c]\n", c);
	// ft_printf("ft_printf:\t[%24c]\n", c);
	// printf("printf:\t\t[%24c]\n", c);
	// ft_printf("ft_printf:\t[%-24c]\n", c);
	// printf("printf:\t\t[%-24c]\n", c);
	
// /*
// 	****************************************
// 				END CHAR TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				START PTR TEST
// 	*****************************************
// */

	// printf("\n\n***************************************\n");
	// printf ("\t\tPTR TEST\n");
	// printf("***************************************\n\n");
	
	// ft_printf("ft_printf:\t[%p]\n", &c);
	// printf("printf:\t\t[%p]\n", &c);
	// ft_printf("ft_printf:\t[%2p]\n", &c);
	// printf("printf:\t\t[%2p]\n", &c);
	// ft_printf("ft_printf:\t[%24p]\n", &c);
	// printf("printf:\t\t[%24p]\n", &c);
	// ft_printf("ft_printf:\t[%-p]\n", &c);
	// printf("printf:\t\t[%-p]\n", &c);
	// ft_printf("ft_printf:\t[%-2p]\n", &c);
	// printf("printf:\t\t[%-2p]\n", &c);
	// ft_printf("ft_printf:\t[%-24p]\n", &c);
	// printf("printf:\t\t[%-24p]\n", &c);
	// ft_printf("ft_printf:\t[%-24p]\n", &c);
	// printf("printf:\t\t[%-24p]\n", &c);
	
	
// /*
// 	****************************************
// 				END PTR TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				START INT TEST
// 	*****************************************
// */

// 	printf("\n\n***************************************\n");
// 	printf ("\t\tINT TEST\n");
// 	printf("***************************************\n\n");



	// printf("\t\tFLAGS\n\n");

// int		nb;
// 	nb = 0;
// 	ft_printf("fnull prec : [%+.0d]\n", nb);
// 	dprintf(2, "null prec : [%+.0d]\n", nb);
// 	nb = 8;
// 	ft_printf("fnull prec : [%+.0d]\n", nb);
// 	dprintf(2, "null prec : [%+.0d]\n", nb);
// 	nb = -1234212;
// 	ft_printf("fnull prec : [%+.0d]\n", nb);
// 	dprintf(2, "null prec : [%+.0d]\n", nb);

// 	nb = 0;
// 	ft_printf("fnull prec : [%.0d]\n", nb);
// 	dprintf(2, "null prec : [%.0d]\n", nb);
// 	nb = 8;
// 	ft_printf("fnull prec : [%.0d]\n", nb);
// 	dprintf(2, "null prec : [%.0d]\n", nb);
// 	nb = -1234212;
// 	ft_printf("fnull prec : [%.0d]\n", nb);
// 	dprintf(2, "null prec : [%.0d]\n", nb);

// 	nb = 0;
// 	ft_printf("fnull prec : [%+.0d]\n", nb);
// 	dprintf(2, "null prec : [%+.0d]\n", nb);
// 	ft_printf("fnull prec : [%+.d]\n", nb);
// 	dprintf(2, "null prec : [%+.d]\n", nb);
// 	ft_printf("fnull prec : [%.0d]\n", nb);
// 	dprintf(2, "null prec : [%.0d]\n", nb);
// 	ft_printf("fnull prec : [%012.0d]\n", nb);
// 	dprintf(2, "null prec : [%012.0d]\n", nb);
// 	ft_printf("fnull prec : [%-.0d]\n", nb);
// 	dprintf(2, "null prec : [%-.0d]\n", nb);
// 	ft_printf("fnull prec : [%-12.0d]\n", nb);
// 	dprintf(2, "null prec : [%-12.0d]\n", nb);


	ft_printf("ft_printf\tflag : [rien]\t\t[%d]\n", d);
	printf("printf:\t\tflag : [rien]\t\t[%d]\n", d);
	ft_printf("ft_printf\tflag : [+]\t\t[%+d]\n", d);
	printf("printf:\t\tflag : [+]\t\t[%+d]\n", d);
	ft_printf("ft_printf\tflag : [-]\t\t[%-d]\n", d);
	printf("printf:\t\tflag : [-]\t\t[%-d]\n", d);
	ft_printf("ft_printf\tflag : [+-]\t\t[%+-d]\n", d);
	printf("printf:\t\tflag : [+-]\t\t[%+-d]\n", d);
	ft_printf("ft_printf\tflag : [-+]\t\t[%-+d]\n", d);
	printf("printf:\t\tflag : [-+]\t\t[%-+d]\n", d);
	ft_printf("ft_printf\tflag : [' ']\t\t[% d]\n", d);
	printf("printf:\t\tflag : [' ']\t\t[% d]\n", d);
	ft_printf("ft_printf\tflag : [- ' ']\t\t[%- d]\n", d);
	printf("printf:\t\tflag : [- ' ']\t\t[%- d]\n", d);
	ft_printf("ft_printf\tflag : [0]\t\t[%0d]\n", d);
	printf("printf:\t\tflag : [0]\t\t[%0d]\n", d);
	ft_printf("ft_printf\tflag : [0+]\t\t[%0+d]\n", d);
	printf("printf:\t\tflag : [0+]\t\t[%0+d]\n", d);
	

	printf("\n\t\tWIDTH + flags\n\n");
	ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", 0);
	printf("printf:\t\tflag : [24]\t\t[%24d]\n", 0);
	ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", 0);
	printf("printf:\t\tflag : [024]\t\t[%024d]\n", 0);
	ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0d]\n", 0);
	printf("printf:\t\tflag : [24.0]\t\t[%24.0d]\n", 0);
	ft_printf("ft_printf\tflag : [-24.0]\t\t[%-24.0d]\n", 0);
	printf("printf:\t\tflag : [-24.0]\t\t[%-24.0d]\n", 0);
	ft_printf("ft_printf\tflag : [-24.1]\t\t[%-24.1d]\n", 0);
	printf("printf:\t\tflag : [-24.1]\t\t[%-24.1d]\n", 0);
	ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", 0);
	printf("printf:\t\tflag : [024]\t\t[%024d]\n", 0);
	ft_printf("ft_printf\tflag : [ 24]\t\t[% 24d]\n", d);
	printf("printf:\t\tflag : [ 24]\t\t[% 24d]\n", d);
	ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);
	printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);
	ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", d);
	printf("printf:\t\tflag : [024]\t\t[%024d]\n", d);
	ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);
	printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);
	ft_printf("ft_printf\tflag : [+24]\t\t[%+24d]\n", d);
	printf("printf:\t\tflag : [+24]\t\t[%+24d]\n", d);
	ft_printf("ft_printf\tflag : [-24]\t\t[%-24d]\n", d);
	printf("printf:\t\tflag : [-24]\t\t[%-24d]\n", d);
	ft_printf("ft_printf\tflag : [+024]\t\t[%+024d]\n", d);
	printf("printf:\t\tflag : [+024]\t\t[%+024d]\n", d);
	ft_printf("ft_printf\tflag : [04]\t\t[%04d]\n", d);
	printf("printf:\t\tflag : [04]\t\t[%04d]\n", d);
	ft_printf("ft_printf\tflag : [+04]\t\t[%+04d]\n", d);
	printf("printf:\t\tflag : [+04]\t\t[%+04d]\n", d);
	ft_printf("ft_printf\tflag : [+4]\t\t[%+4d]\n", d);
	printf("printf:\t\tflag : [+4]\t\t[%+4d]\n", d);
	ft_printf("ft_printf\tflag : [-+24]\t\t[%-+24d]\n", d);
	printf("printf:\t\tflag : [-+24]\t\t[%-+24d]\n", d);

	ft_printf("ft_printf\tflag : [2]\t\t[%2d]\n", d);
	printf("printf:\t\tflag : [2]\t\t[%2d]\n", d);

	printf("\n\t\tPRECISION + flags\n\n");
	ft_printf("ft_printf\tflag : [.3]\t\t[%.3d]\n", d);
	printf("printf:\t\tflag : [.3]\t\t[%.3d]\n", d);
	ft_printf("ft_printf\tflag : [.2]\t\t[%.2d]\n", d);
	printf("printf:\t\tflag : [.2]\t\t[%.2d]\n", d);
	ft_printf("ft_printf\tflag : [+.42]\t\t[%+.42d]\n", d);
	printf("printf:\t\tflag : [+.42]\t\t[%+.42d]\n", d);
	ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42d]\n", d);
	printf("printf:\t\tflag : [-.42]\t\t[%-.42d]\n", d);
	ft_printf("ft_printf\tflag : [+-.42]\t\t[%+-.42d]\n", d);
	printf("printf:\t\tflag : [+-.42]\t\t[%+-.42d]\n", d);
	ft_printf("ft_printf\tflag : [-+.42]\t\t[%-+.42d]\n", d);
	printf("printf:\t\tflag : [-+.42]\t\t[%-+.42d]\n", d);
	ft_printf("ft_printf\tflag : [' '.42]\t\t[% .42d]\n", d);
	printf("printf:\t\tflag : [' '.42]\t\t[% .42d]\n", d);
	ft_printf("ft_printf\tflag : [- ' '.42]\t[%- .42d]\n", d);
	printf("printf:\t\tflag : [- ' '.42]\t[%- .42d]\n", d);
	
	
	printf("\n\t\tWIDTH + PRECISION + flags\n\n");
	ft_printf("ft_printf\tflag : [24.42]\t\t[%24.42d]\n", d);
	printf("printf:\t\tflag : [24.42]\t\t[%24.42d]\n", d);
	ft_printf("ft_printf\tflag : [ 042]\t\t[% 042d]\n", d);
	printf("printf:\t\tflag : [ 042]\t\t[% 042d]\n", d);
	ft_printf("ft_printf\tflag : [024.42]\t\t[%024.42d]\n", d);
	printf("printf:\t\tflag : [024.42]\t\t[%024.42d]\n", d);
	ft_printf("ft_printf\tflag : [0.42]\t\t[%0.42d]\n", d);
	printf("printf:\t\tflag : [0.42]\t\t[%0.42d]\n", d);
	ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0d]\n", d);
	printf("printf:\t\tflag : [24.0]\t\t[%24.0d]\n", d);
	ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0d]\n", d);
	printf("printf:\t\tflag : [0.0]\t\t[%0.0d]\n", d);
	ft_printf("ft_printf\tflag : [+24.42]\t\t[%+24.42d]\n", d);
	printf("printf:\t\tflag : [+24.42]\t\t[%+24.42d]\n", d);
	ft_printf("ft_printf\tflag : [-24.42]\t\t[%-24.42d]\n", d);
	printf("printf:\t\tflag : [-24.42]\t\t[%-24.42d]\n", d);
	ft_printf("ft_printf\tflag : [+-24.42]\t[%+-24.42d]\n", d);
	printf("printf:\t\tflag : [+-24.42]\t[%+-24.42d]\n", d);
	ft_printf("ft_printf\tflag : [' '24.42]\t[% 24.42d]\n", d);
	printf("printf:\t\tflag : [' '24.42]\t[% 24.42d]\n", d);
	ft_printf("ft_printf\tflag : [' '0.42]\t[% 0.42d]\n", d);
	printf("printf:\t\tflag : [' '0.42]\t[% 0.42d]\n", d);
	ft_printf("ft_printf\tflag : [' '24.0]\t[% 24.0d]\n", d);
	printf("printf:\t\tflag : [' '24.0]\t[% 24.0d]\n", d);
	ft_printf("ft_printf\tflag : [- ' '24.42]\t[%- 24.42d]\n", d);
	printf("printf:\t\tflag : [- ' '24.42]\t[%- 24.42d]\n", d);
	ft_printf("ft_printf\tflag : [0 ' '24.42]\t[%0 24.42d]\n", d);
	printf("printf:\t\tflag : [0 ' '24.42]\t[%0 24.42d]\n", d);
	ft_printf("ft_printf\tflag : [+++24.42]\t[%24.42d]\n", d);
	printf("printf:\t\tflag : [+++24.42]\t[%24.42d]\n", d);
	ft_printf("ft_printf\tflag : [-+-24.42]\t[%-+-24.42d]\n", d);
	printf("printf:\t\tflag : [-+-24.42]\t[%-+-24.42d]\n", d);
	ft_printf("ft_printf\tflag : [+00+24.42]\t[%+00+24.42d]\n", d);
	printf("printf:\t\tflag : [+00+24.42]\t[%+00+24.42d]\n", d);
	ft_printf("ft_printf\tflag : [-5.3]\t\t[%-5.3d]\n", d);
	printf("printf:\t\tflag : [-5.3]\t\t[%-5.3d]\n", d);
	ft_printf("ft_printf\tflag : [-+5.3]\t\t[%-+5.3d]\n", d);
	printf("printf:\t\tflag : [-+5.3]\t\t[%-+5.3d]\n", d);
	ft_printf("ft_printf\tflag : [-3.5]\t\t[%-3.5d]\n", d);
	printf("printf:\t\tflag : [-3.5]\t\t[%-3.5d]\n", d);
	ft_printf("ft_printf\tflag : [-+3.5]\t\t[%-+3.5d]\n", d);
	printf("printf:\t\tflag : [-+3.5]\t\t[%-+3.5d]\n", d);

	// ft_printf("ft_printf\tflag : [ 05.3i]\t\t[% 05.3i]\n", d);
	// printf("printf:\t\tflag : [ 05.3i]\t\t[% 05.3i]\n", d);

	
	// ft_printf("ft_printf\tflag : [.0]\t[%.0d]\n", 0);
	// printf("printf:\t\tflag : [.0]\t[%.0d]\n", 0);
	// nb = 0;
	// ft_printf("null prec : [%-.0x]\n", nb);
	// printf("null prec : [%-.0x]\n", nb);
	// ft_printf("null prec : [%-12.0x]\n", nb);
	// printf("null prec : [%-12.0x]\n", nb);
	// nb = 8;
	// ft_printf("null prec : [%.0x]\n", nb);
	// printf("null prec : [%.0x]\n", nb);
	// nb = -1234212;
	// ft_printf("null prec : [%.0x]\n", nb);
	// printf("null prec : [%.0x]\n", nb);

	// nb = 0;
	// ft_printf("null prec : [%.0x]\n", nb);
	// printf("null prec : [%.0x]\n", nb);
	// nb = 8;
	// ft_printf("null prec : [%.0x]\n", nb);
	// printf("null prec : [%.0x]\n", nb);
	// nb = -1234212;
	// ft_printf("null prec : [%.0x]\n", nb);
	// printf("null prec : [%.0x]\n", nb);

	// nb = 0;
	// ft_printf("null prec : [%.0x]\n", nb);
	// printf("null prec : [%.0x]\n", nb);
	// ft_printf("null prec : [%.x]\n", nb);
	// printf("null prec : [%.x]\n", nb);
	// ft_printf("null prec : [%.0x]\n", nb);
	// printf("null prec : [%.0x]\n", nb);
	// ft_printf("null prec : [%012.0x]\n", nb);
	// printf("null prec : [%012.0x]\n", nb);
	// ft_printf("null prec : [%-.0x]\n", nb);
	// printf("null prec : [%-.0x]\n", nb);
	// ft_printf("null prec : [%-12.0x]\n", nb);
	// printf("null prec : [%-12.0x]\n", nb);

	// unsigned int		nb;

	// nb = 0;
	// printf("null prec : [%.0x]\n", nb);
	// ft_printf("null prec : [%.0x]\n", nb);
	// printf("null prec : [%.x]\n", nb);
	// ft_printf("null prec : [%.x]\n", nb);
	// printf("null prec : [%12.0x]\n", nb);
	// ft_printf("null prec : [%12.0x]\n", nb);
	// printf("null prec : [%-5.x]\n", nb);
	// ft_printf("null prec : [%-5.x]\n", nb);

	// printf("null prec : [%#.0x]\n", nb);
	// ft_printf("null prec : [%#.0x]\n", nb);
	// printf("null prec : [%#.x]\n", nb);
	// ft_printf("null prec : [%#.x]\n", nb);
	// printf("null prec : [%#12.0x]\n", nb);
	// ft_printf("null prec : [%#12.0x]\n", nb);
	// printf("null prec : [%#-5.x]\n", nb);
	// ft_printf("null prec : [%#-5.x]\n", nb);


	// printf("\t-----o-----\n");
	// nb = 0;
	// printf("null prec : [%.0o]\n", nb);
	// ft_printf("null prec : [%.0o]\n", nb);
	// printf("null prec : [%.o]\n", nb);
	// ft_printf("null prec : [%.o]\n", nb);
	// printf("null prec : [%12.0o]\n", nb);
	// ft_printf("null prec : [%12.0o]\n", nb);
	// printf("null prec : [%-5.o]\n", nb);
	// ft_printf( "null prec : [%-5.o]\n", nb);

	// printf("null prec : [%#.0o]\n", nb);
	// ft_printf("null prec : [%#.0o]\n", nb);
	// printf("null prec : [%#.o]\n", nb);
	// ft_printf("null prec : [%#.o]\n", nb);
	// printf("null prec : [%#12.0o]\n", nb);
	// ft_printf("null prec : [%#12.0o]\n", nb);
	// printf("null prec : [%#-5.o]\n", nb);
	// ft_printf("null prec : [%#-5.o]\n", nb);





// /*
// 	****************************************
// 				END INT TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				START SHORT TEST
// 	*****************************************
// */

// 	printf("\n\n***************************************\n");
// 	printf ("\t\tSHORT TEST\n");
// 	printf("***************************************\n\n");

// 	ft_printf("ft_printf:\t[%- d]\n", s);
// 	printf("printf:\t\t[%- d]\n\n", s);
// 	ft_printf("ft_printf:\t[%d]\n", s);
// 	printf("printf:\t\t[%d]\n\n", s);
// 	ft_printf("ft_printf:\t[%hd]\n", s);
// 	printf("printf:\t\t[%hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%hd]\n", s);
// 	printf("printf:\t\t[%hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%-hd]\n", s);
// 	printf("printf:\t\t[%-hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%+hd]\n", s);
// 	printf("printf:\t\t[%+hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%24hd]\n", s);
// 	printf("printf:\t\t[%24hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%2hd]\n", s);
// 	printf("printf:\t\t[%2hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%.24hd]\n", s);
// 	printf("printf:\t\t[%.24hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%.2hd]\n", s);
// 	printf("printf:\t\t[%.2hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%24.2hd]\n", s);
// 	printf("printf:\t\t[%24.2hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%24.24hd]\n", s);
// 	printf("printf:\t\t[%24.24hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%24.28hd]\n", s);
// 	printf("printf:\t\t[%24.28hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%28.24hd]\n", s);
// 	printf("printf:\t\t[%28.24hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%2.28hd]\n", s);
// 	printf("printf:\t\t[%2.28hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%2.5hd]\n", s);
// 	printf("printf:\t\t[%2.5hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%-24hd]\n", s);
// 	printf("printf:\t\t[%-24hd]\n\n", s);
// 	ft_printf("ft_printf:\t[%-5hd]\n", s);
// 	printf("printf:\t\t[%-5hd]\n\n", s);
	
// /*
// 	****************************************
// 				END SHORT TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				START LONG TEST
// 	*****************************************
// */
	
// 	printf("\n\n***************************************\n");
// 	printf ("\t\tLONG TEST\n");
// 	printf("***************************************\n\n");

// 	ft_printf("ft_printf:\t[%ld]\n", e);
// 	printf("printf:\t\t[%ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%-ld]\n", e);
// 	printf("printf:\t\t[%-ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%+ld]\n", e);
// 	printf("printf:\t\t[%+ld]\n\n", e);
// 	ft_printf("ft_printf:\t[% ld]\n", e);
// 	printf("printf:\t\t[% ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%0ld]\n", e);
// 	printf("printf:\t\t[%0ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%12ld]\n", e);
// 	printf("printf:\t\t[%12ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%48ld]\n", e);
// 	printf("printf:\t\t[%48ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%.12ld]\n", e);
// 	printf("printf:\t\t[%.12ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%.48ld]\n", e);
// 	printf("printf:\t\t[%.48ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%-48ld]\n", e);
// 	printf("printf:\t\t[%-48ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%-.48ld]\n", e);
// 	printf("printf:\t\t[%-.48ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%2.48ld]\n", e);
// 	printf("printf:\t\t[%2.48ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%2.2ld]\n", e);
// 	printf("printf:\t\t[%2.2ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%-+ld]\n", e);
// 	printf("printf:\t\t[%-+ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%+-ld]\n", e);
// 	printf("printf:\t\t[%+-ld]\n\n", e);
// 	ft_printf("ft_printf:\t[%+ld]\n", -e);
// 	printf("printf:\t\t[%+ld]\n\n", -e);

// /*
// 	****************************************
// 				END LONG TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				START LONG LONG TEST
// 	*****************************************
// */

// 	printf("\n\n***************************************\n");
// 	printf ("\t\tLONG LONG TEST\n");
// 	printf("***************************************\n\n");

// 	ft_printf("ft_printf:\t[%lld]\n", f);
// 	printf("printf:\t\t[%lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%-lld]\n", f);
// 	printf("printf:\t\t[%-lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%+lld]\n", f);
// 	printf("printf:\t\t[%+lld]\n\n", f);
// 	ft_printf("ft_printf:\t[% lld]\n", f);
// 	printf("printf:\t\t[% lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%0lld]\n", f);
// 	printf("printf:\t\t[%0lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%12lld]\n", f);
// 	printf("printf:\t\t[%12lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%48lld]\n", f);
// 	printf("printf:\t\t[%48lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%.12lld]\n", f);
// 	printf("printf:\t\t[%.12lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%.48lld]\n", f);
// 	printf("printf:\t\t[%.48lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%-48lld]\n", f);
// 	printf("printf:\t\t[%-48lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%-.48lld]\n", f);
// 	printf("printf:\t\t[%-.48lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%2.48lld]\n", f);
// 	printf("printf:\t\t[%2.48lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%2.2lld]\n", f);
// 	printf("printf:\t\t[%2.2lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%-+lld]\n", f);
// 	printf("printf:\t\t[%-+lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%+-lld]\n", f);
// 	printf("printf:\t\t[%+-lld]\n\n", f);
// 	ft_printf("ft_printf:\t[%+lld]\n", -f);
// 	printf("printf:\t\t[%+lld]\n\n", -f);
	
// /*
// 	****************************************
// 				END LONG LONG TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				START OCTAL TEST
// 	*****************************************
//	*/
	// printf("\n\n***************************************\n");
	// printf ("\t\tOCTAL TEST\n");
	// printf("***************************************\n\n");
	// ft_printf("ft_printf\tflag : [#]\t\t[%#o]\n", d_octal);
	// printf("printf:\t\tflag : [#]\t\t[%#o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [#25]\t\t[%#25o]\n", d_octal);
	// printf("printf:\t\tflag : [#25]\t\t[%#25o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [-#25]\t\t[%-#25o]\n", d_octal);
	// printf("printf:\t\tflag : [-#25]\t\t[%-#25o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [#025]\t\t[%#025o]\n", d_octal);
	// printf("printf:\t\tflag : [#025]\t\t[%#025o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [#.25]\t\t[%#.25o]\n", d_octal);
	// printf("printf:\t\tflag : [#.25]\t\t[%#.25o]\n", d_octal);
	
	// ft_printf("ft_printf\tflag : [#30.25]\t\t[%#30.25o]\n", d_octal);
	// printf("printf:\t\tflag : [#30.25]\t\t[%#30.25o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [#25.30]\t\t[%#25.30o]\n", d_octal);
	// printf("printf:\t\tflag : [#25.30]\t\t[%#25.30o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [-#25.30]\t[%-#25.30o]\n", d_octal);
	// printf("printf:\t\tflag : [-#25.30]\t[%-#25.30o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [#30.30]\t\t[%#30.30o]\n", d_octal);
	// printf("printf:\t\tflag : [#30.30]\t\t[%#30.30o]\n", d_octal);
	
	// ft_printf("ft_printf\tflag : [rien]\t\t[%o]\n", 0);
	// printf("printf:\t\tflag : [rien]\t\t[%o]\n", 0);
	// ft_printf("ft_printf\tflag : [.0]\t\t[%.0o]\n", 0);
	// printf("printf:\t\tflag : [.0]\t\t[%.0o]\n", 0);
	// ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0o]\n", 0);
	// printf("printf:\t\tflag : [0.0]\t\t[%0.0o]\n", 0);
	// ft_printf("ft_printf\tflag : [0.1]\t\t[%0.1o]\n", 0);
	// printf("printf:\t\tflag : [0.1]\t\t[%0.1o]\n", 0);
	// ft_printf("ft_printf\tflag : [1.0]\t\t[%1.0o]\n", 0);
	// printf("printf:\t\tflag : [1.0]\t\t[%1.0o]\n", 0);
	// ft_printf("ft_printf\tflag : [01.1]\t\t[%01.1o]\n", 0);
	// printf("printf:\t\tflag : [01.1]\t\t[%01.1o]\n", 0);
	// ft_printf("ft_printf\tflag : [rien]\t\t[%o]\n", d_octal);
	// printf("printf:\t\tflag : [rien]\t\t[%o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24]\t\t[%24o]\n", d_octal);
	// printf("printf:\t\tflag : [24]\t\t[%24o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0o]\n", d_octal);
	// printf("printf:\t\tflag : [0.0]\t\t[%0.0o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [0]\t\t[%0o]\n", d_octal);
	// printf("printf:\t\tflag : [0]\t\t[%0o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0o]\n", d_octal);
	// printf("printf:\t\tflag : [24.0]\t\t[%24.0o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24.1]\t\t[%24.1o]\n", d_octal);
	// printf("printf:\t\tflag : [24.1]\t\t[%24.1o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24.5]\t\t[%24.5o]\n", d_octal);
	// printf("printf:\t\tflag : [24.5]\t\t[%24.5o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [-24]\t\t[%-24o]\n", d_octal);
	// printf("printf:\t\tflag : [-24]\t\t[%-24o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [.0]\t\t[%.0o]\n", d_octal);
	// printf("printf:\t\tflag : [.0]\t\t[%.0o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [.42]\t\t[%.42o]\n", d_octal);
	// printf("printf:\t\tflag : [.42]\t\t[%.42o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42o]\n", d_octal);
	// printf("printf:\t\tflag : [-.42]\t\t[%-.42o]\n", d_octal);
	// ft_printf("ft_printf\tflag : [h]\t\t[%ho]\n", us_octal);
	// printf("printf:\t\tflag : [h]\t\t[%ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [24h]\t\t[%24ho]\n", us_octal);
	// printf("printf:\t\tflag : [24h]\t\t[%24ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [024h]\t\t[%024ho]\n", us_octal);
	// printf("printf:\t\tflag : [024h]\t\t[%024ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [-24h]\t\t[%-24ho]\n", us_octal);
	// printf("printf:\t\tflag : [-24h]\t\t[%-24ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [0h]\t\t[%0ho]\n", us_octal);
	// printf("printf:\t\tflag : [0h]\t\t[%0ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [.0h]\t\t[%.0ho]\n", us_octal);
	// printf("printf:\t\tflag : [.0h]\t\t[%.0ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [0.0h]\t\t[%0.0ho]\n", us_octal);
	// printf("printf:\t\tflag : [0.0h]\t\t[%0.0ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [5.3h]\t\t[%5.3ho]\n", us_octal);
	// printf("printf:\t\tflag : [5.3h]\t\t[%5.3ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [2.6h]\t\t[%2.6ho]\n", us_octal);
	// printf("printf:\t\tflag : [2.6h]\t\t[%2.6ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [-2.6h]\t\t[%-2.6ho]\n", us_octal);
	// printf("printf:\t\tflag : [-2.6h]\t\t[%-2.6ho]\n", us_octal);
	// ft_printf("ft_printf\tflag : [-5.3h]\t\t[%-5.3ho]\n", us_octal);
	// printf("printf:\t\tflag : [-5.3h]\t\t[%-5.3ho]\n", us_octal);
	
	// printf("\n\n***************************************\n");
	// printf ("\t\tLONG LONG OCTAL TEST\n");
	// printf("***************************************\n\n");
	// ft_printf("ft_printf\tflag : [ll]\t\t[%llo]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [ll]\t\t[%llo]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llo]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [.42ll]\t\t[%.42llo]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [24ll]\t\t[%24llo]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [24ll]\t\t[%24llo]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [024ll]\t\t[%024llo]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [024ll]\t\t[%024llo]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llo]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [-42ll]\t\t[%-42llo]\n", __LONG_LONG_MAX__);

	// ft_printf("ft_printf\tflag : [ll]\t\t[%llo]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [ll]\t\t[%llo]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llo]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [.42ll]\t\t[%.42llo]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [24ll]\t\t[%24llo]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [24ll]\t\t[%24llo]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [024ll]\t\t[%024llo]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [024ll]\t\t[%024llo]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llo]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [-42ll]\t\t[%-42llo]\n", LLONG_MIN);
	
	// printf("\n\n***************************************\n");
	// printf ("\t\tLONG OCTAL TEST\n");
	// printf("***************************************\n\n");
	// ft_printf("ft_printf\tflag : [l]\t\t[%lo]\n", LONG_MIN);
	// printf("printf:\t\tflag : [l]\t\t[%lo]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lo]\n", LONG_MIN);
	// printf("printf:\t\tflag : [.42l]\t\t[%.42lo]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [24l]\t\t[%24lo]\n", LONG_MIN);
	// printf("printf:\t\tflag : [24l]\t\t[%24lo]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [024l]\t\t[%024lo]\n", LONG_MIN);
	// printf("printf:\t\tflag : [024l]\t\t[%024lo]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lo]\n", LONG_MIN);
	// printf("printf:\t\tflag : [-42l]\t\t[%-42lo]\n", LONG_MIN);
	
	// ft_printf("ft_printf\tflag : [l]\t\t[%lo]\n", LONG_MAX);
	// printf("printf:\t\tflag : [l]\t\t[%lo]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lo]\n", LONG_MAX);
	// printf("printf:\t\tflag : [.42l]\t\t[%.42lo]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [24l]\t\t[%24lo]\n", LONG_MAX);
	// printf("printf:\t\tflag : [24l]\t\t[%24lo]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [024l]\t\t[%024lo]\n", LONG_MAX);
	// printf("printf:\t\tflag : [024l]\t\t[%024lo]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lo]\n", LONG_MAX);
	// printf("printf:\t\tflag : [-42l]\t\t[%-42lo]\n", LONG_MAX);

	

	
	
// /*
// 	****************************************
// 				END OCTAL TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				HEX MIN TEST
// 	*****************************************
// */
	// printf("\n\n***************************************\n");
	// printf ("\t\tHEX MIN TEST\n");
	// printf("***************************************\n\n");

	
	// ft_printf("ft_printf\tflag : [rien]\t\t[%x]\n", 0);
	// printf("printf:\t\tflag : [rien]\t\t[%x]\n", 0);
	// ft_printf("ft_printf\tflag : [.0]\t\t[%.0x]\n", 0);
	// printf("printf:\t\tflag : [.0]\t\t[%.0x]\n", 0);
	// ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0x]\n", 0);
	// printf("printf:\t\tflag : [0.0]\t\t[%0.0x]\n", 0);
	// ft_printf("ft_printf\tflag : [0.1]\t\t[%0.1x]\n", 0);
	// printf("printf:\t\tflag : [0.1]\t\t[%0.1x]\n", 0);
	// ft_printf("ft_printf\tflag : [1.0]\t\t[%1.0x]\n", 0);
	// printf("printf:\t\tflag : [1.0]\t\t[%1.0x]\n", 0);
	// ft_printf("ft_printf\tflag : [01.1]\t\t[%01.1x]\n", 0);
	// printf("printf:\t\tflag : [01.1]\t\t[%01.1x]\n", 0);
	// ft_printf("ft_printf\tflag : [rien]\t\t[%x]\n", d_octal);
	// printf("printf:\t\tflag : [rien]\t\t[%x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24]\t\t[%24x]\n", d_octal);
	// printf("printf:\t\tflag : [24]\t\t[%24x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0x]\n", d_octal);
	// printf("printf:\t\tflag : [0.0]\t\t[%0.0x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [0]\t\t[%0x]\n", d_octal);
	// printf("printf:\t\tflag : [0]\t\t[%0x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0x]\n", d_octal);
	// printf("printf:\t\tflag : [24.0]\t\t[%24.0x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24.1]\t\t[%24.1x]\n", d_octal);
	// printf("printf:\t\tflag : [24.1]\t\t[%24.1x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24.5]\t\t[%24.5x]\n", d_octal);
	// printf("printf:\t\tflag : [24.5]\t\t[%24.5x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [-24]\t\t[%-24x]\n", d_octal);
	// printf("printf:\t\tflag : [-24]\t\t[%-24x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [.0]\t\t[%.0x]\n", d_octal);
	// printf("printf:\t\tflag : [.0]\t\t[%.0x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [.42]\t\t[%.42x]\n", d_octal);
	// printf("printf:\t\tflag : [.42]\t\t[%.42x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42x]\n", d_octal);
	// printf("printf:\t\tflag : [-.42]\t\t[%-.42x]\n", d_octal);
	// ft_printf("ft_printf\tflag : [h]\t\t[%hx]\n", us_octal);
	// printf("printf:\t\tflag : [h]\t\t[%hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [24h]\t\t[%24hx]\n", us_octal);
	// printf("printf:\t\tflag : [24h]\t\t[%24hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [024h]\t\t[%024hx]\n", us_octal);
	// printf("printf:\t\tflag : [024h]\t\t[%024hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [-24h]\t\t[%-24hx]\n", us_octal);
	// printf("printf:\t\tflag : [-24h]\t\t[%-24hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [0h]\t\t[%0hx]\n", us_octal);
	// printf("printf:\t\tflag : [0h]\t\t[%0hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [.0h]\t\t[%.0hx]\n", us_octal);
	// printf("printf:\t\tflag : [.0h]\t\t[%.0hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [0.0h]\t\t[%0.0hx]\n", us_octal);
	// printf("printf:\t\tflag : [0.0h]\t\t[%0.0hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [5.3h]\t\t[%5.3hx]\n", us_octal);
	// printf("printf:\t\tflag : [5.3h]\t\t[%5.3hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [2.6h]\t\t[%2.6hx]\n", us_octal);
	// printf("printf:\t\tflag : [2.6h]\t\t[%2.6hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [-2.6h]\t\t[%-2.6hx]\n", us_octal);
	// printf("printf:\t\tflag : [-2.6h]\t\t[%-2.6hx]\n", us_octal);
	// ft_printf("ft_printf\tflag : [-5.3h]\t\t[%-5.3hx]\n", us_octal);
	// printf("printf:\t\tflag : [-5.3h]\t\t[%-5.3hx]\n", us_octal);
	
	// printf("\n\n***************************************\n");
	// printf ("\t\tLONG LONG HEX MIN TEST\n");
	// printf("***************************************\n\n");
	// ft_printf("ft_printf\tflag : [ll]\t\t[%llx]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [ll]\t\t[%llx]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llx]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [.42ll]\t\t[%.42llx]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [24ll]\t\t[%24llx]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [24ll]\t\t[%24llx]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [024ll]\t\t[%024llx]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [024ll]\t\t[%024llx]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llx]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [-42ll]\t\t[%-42llx]\n", __LONG_LONG_MAX__);

	// ft_printf("ft_printf\tflag : [ll]\t\t[%llx]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [ll]\t\t[%llx]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llx]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [.42ll]\t\t[%.42llx]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [24ll]\t\t[%24llx]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [24ll]\t\t[%24llx]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [024ll]\t\t[%024llx]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [024ll]\t\t[%024llx]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llx]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [-42ll]\t\t[%-42llx]\n", LLONG_MIN);
	
	// printf("\n\n***************************************\n");
	// printf ("\t\tLONG HEX MIN TEST\n");
	// printf("***************************************\n\n");
	// ft_printf("ft_printf\tflag : [l]\t\t[%lx]\n", LONG_MIN);
	// printf("printf:\t\tflag : [l]\t\t[%lx]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lx]\n", LONG_MIN);
	// printf("printf:\t\tflag : [.42l]\t\t[%.42lx]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [24l]\t\t[%24lx]\n", LONG_MIN);
	// printf("printf:\t\tflag : [24l]\t\t[%24lx]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [024l]\t\t[%024lx]\n", LONG_MIN);
	// printf("printf:\t\tflag : [024l]\t\t[%024lx]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lx]\n", LONG_MIN);
	// printf("printf:\t\tflag : [-42l]\t\t[%-42lx]\n", LONG_MIN);
	
	// ft_printf("ft_printf\tflag : [l]\t\t[%lx]\n", LONG_MAX);
	// printf("printf:\t\tflag : [l]\t\t[%lx]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lx]\n", LONG_MAX);
	// printf("printf:\t\tflag : [.42l]\t\t[%.42lx]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [24l]\t\t[%24lx]\n", LONG_MAX);
	// printf("printf:\t\tflag : [24l]\t\t[%24lx]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [024l]\t\t[%024lx]\n", LONG_MAX);
	// printf("printf:\t\tflag : [024l]\t\t[%024lx]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lx]\n", LONG_MAX);
	// printf("printf:\t\tflag : [-42l]\t\t[%-42lx]\n", LONG_MAX);	
// /*
// 	****************************************
// 				END HEX MIN TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				HEX MAJ TEST
// 	*****************************************
// */
	// printf("\n\n***************************************\n");
	// printf ("\t\tHEX MAJ TEST\n");
	// printf("***************************************\n\n");

	// ft_printf("ft_printf\tflag : [rien]\t\t[%X]\n", 0);
	// printf("printf:\t\tflag : [rien]\t\t[%X]\n", 0);
	// ft_printf("ft_printf\tflag : [.0]\t\t[%.0X]\n", 0);
	// printf("printf:\t\tflag : [.0]\t\t[%.0X]\n", 0);
	// ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0X]\n", 0);
	// printf("printf:\t\tflag : [0.0]\t\t[%0.0X]\n", 0);
	// ft_printf("ft_printf\tflag : [0.1]\t\t[%0.1X]\n", 0);
	// printf("printf:\t\tflag : [0.1]\t\t[%0.1X]\n", 0);
	// ft_printf("ft_printf\tflag : [1.0]\t\t[%1.0X]\n", 0);
	// printf("printf:\t\tflag : [1.0]\t\t[%1.0X]\n", 0);
	// ft_printf("ft_printf\tflag : [01.1]\t\t[%01.1X]\n", 0);
	// printf("printf:\t\tflag : [01.1]\t\t[%01.1X]\n", 0);
	// ft_printf("ft_printf\tflag : [rien]\t\t[%X]\n", d_octal);
	// printf("printf:\t\tflag : [rien]\t\t[%X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24]\t\t[%24X]\n", d_octal);
	// printf("printf:\t\tflag : [24]\t\t[%24X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0X]\n", d_octal);
	// printf("printf:\t\tflag : [0.0]\t\t[%0.0X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [0]\t\t[%0X]\n", d_octal);
	// printf("printf:\t\tflag : [0]\t\t[%0X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0X]\n", d_octal);
	// printf("printf:\t\tflag : [24.0]\t\t[%24.0X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24.1]\t\t[%24.1X]\n", d_octal);
	// printf("printf:\t\tflag : [24.1]\t\t[%24.1X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [24.5]\t\t[%24.5X]\n", d_octal);
	// printf("printf:\t\tflag : [24.5]\t\t[%24.5X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [-24]\t\t[%-24X]\n", d_octal);
	// printf("printf:\t\tflag : [-24]\t\t[%-24X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [.0]\t\t[%.0X]\n", d_octal);
	// printf("printf:\t\tflag : [.0]\t\t[%.0X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [.42]\t\t[%.42X]\n", d_octal);
	// printf("printf:\t\tflag : [.42]\t\t[%.42X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42X]\n", d_octal);
	// printf("printf:\t\tflag : [-.42]\t\t[%-.42X]\n", d_octal);
	// ft_printf("ft_printf\tflag : [h]\t\t[%hX]\n", us_octal);
	// printf("printf:\t\tflag : [h]\t\t[%hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [24h]\t\t[%24hX]\n", us_octal);
	// printf("printf:\t\tflag : [24h]\t\t[%24hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [024h]\t\t[%024hX]\n", us_octal);
	// printf("printf:\t\tflag : [024h]\t\t[%024hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [-24h]\t\t[%-24hX]\n", us_octal);
	// printf("printf:\t\tflag : [-24h]\t\t[%-24hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [0h]\t\t[%0hX]\n", us_octal);
	// printf("printf:\t\tflag : [0h]\t\t[%0hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [.0h]\t\t[%.0hX]\n", us_octal);
	// printf("printf:\t\tflag : [.0h]\t\t[%.0hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [0.0h]\t\t[%0.0hX]\n", us_octal);
	// printf("printf:\t\tflag : [0.0h]\t\t[%0.0hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [5.3h]\t\t[%5.3hX]\n", us_octal);
	// printf("printf:\t\tflag : [5.3h]\t\t[%5.3hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [2.6h]\t\t[%2.6hX]\n", us_octal);
	// printf("printf:\t\tflag : [2.6h]\t\t[%2.6hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [-2.6h]\t\t[%-2.6hX]\n", us_octal);
	// printf("printf:\t\tflag : [-2.6h]\t\t[%-2.6hX]\n", us_octal);
	// ft_printf("ft_printf\tflag : [-5.3h]\t\t[%-5.3hX]\n", us_octal);
	// printf("printf:\t\tflag : [-5.3h]\t\t[%-5.3hX]\n", us_octal);
	
	// printf("\n\n***************************************\n");
	// printf ("\t\tLONG LONG HEX MAJ TEST\n");
	// printf("***************************************\n\n");
	// ft_printf("ft_printf\tflag : [ll]\t\t[%llX]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [ll]\t\t[%llX]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llX]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [.42ll]\t\t[%.42llX]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [24ll]\t\t[%24llX]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [24ll]\t\t[%24llX]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [024ll]\t\t[%024llX]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [024ll]\t\t[%024llX]\n", __LONG_LONG_MAX__);
	// ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llX]\n", __LONG_LONG_MAX__);
	// printf("printf:\t\tflag : [-42ll]\t\t[%-42llX]\n", __LONG_LONG_MAX__);

	// ft_printf("ft_printf\tflag : [ll]\t\t[%llX]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [ll]\t\t[%llX]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llX]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [.42ll]\t\t[%.42llX]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [24ll]\t\t[%24llX]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [24ll]\t\t[%24llX]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [024ll]\t\t[%024llX]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [024ll]\t\t[%024llX]\n", LLONG_MIN);
	// ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llX]\n", LLONG_MIN);
	// printf("printf:\t\tflag : [-42ll]\t\t[%-42llX]\n", LLONG_MIN);
	
	// printf("\n\n***************************************\n");
	// printf ("\t\tLONG HEX MAJ TEST\n");
	// printf("***************************************\n\n");
	// ft_printf("ft_printf\tflag : [l]\t\t[%lX]\n", LONG_MIN);
	// printf("printf:\t\tflag : [l]\t\t[%lX]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lX]\n", LONG_MIN);
	// printf("printf:\t\tflag : [.42l]\t\t[%.42lX]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [24l]\t\t[%24lX]\n", LONG_MIN);
	// printf("printf:\t\tflag : [24l]\t\t[%24lX]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [024l]\t\t[%024lX]\n", LONG_MIN);
	// printf("printf:\t\tflag : [024l]\t\t[%024lX]\n", LONG_MIN);
	// ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lX]\n", LONG_MIN);
	// printf("printf:\t\tflag : [-42l]\t\t[%-42lX]\n", LONG_MIN);
	
	// ft_printf("ft_printf\tflag : [l]\t\t[%lX]\n", LONG_MAX);
	// printf("printf:\t\tflag : [l]\t\t[%lX]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lX]\n", LONG_MAX);
	// printf("printf:\t\tflag : [.42l]\t\t[%.42lX]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [24l]\t\t[%24lX]\n", LONG_MAX);
	// printf("printf:\t\tflag : [24l]\t\t[%24lX]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [024l]\t\t[%024lX]\n", LONG_MAX);
	// printf("printf:\t\tflag : [024l]\t\t[%024lX]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lX]\n", LONG_MAX);
	// printf("printf:\t\tflag : [-42l]\t\t[%-42lX]\n", LONG_MAX);	
// /*
// 	****************************************
// 				END HEX MAJ TEST
// 	*****************************************
// */

// /*
// 	****************************************
// 				START SHARP OCTAL/HEX TEST
// 	*****************************************
// */

	// printf("\n\n***************************************\n");
	// printf ("\tSHARP OCTAL/HEX TEST\n");
	// printf("***************************************\n\n");
	// int nb = 42;
	
	// short nb = 0;
	// short nb2 = 0;
	// short nb3 = 0;
	// ft_printf("ft_printf\tflag : [05hx]\t\t[%05hx]\n", nb);
	// printf("printf:\t\tflag : [05hx]\t\t[%05hx]\n", nb);
	// ft_printf("ft_printf\tflag : [#05X]\t\t[%#05X]\n", nb);
	// printf("printf:\t\tflag : [#05X]\t\t[%#05X]\n", nb);
	// ft_printf("ft_printf\tflag : [#5X]\t\t[%#5X]\n", nb);
	// printf("printf:\t\tflag : [#5X]\t\t[%#5X]\n", nb);
	// ft_printf("ft_printf\tflag : [#.5hx]\t\t[%#.5hx]\n", nb);
	// printf("printf:\t\tflag : [#.5hx]\t\t[%#.5hx]\n", nb);
	// printf("printf:\t\tflag : [05.3hx]\t\t[%05.3hx]\n", nb);
	// ft_printf("ft_printf\tflag : [05.3hx]\t\t[%05.3hx]\n", nb);
	// printf("printf:\t\tflag : [015hx]\t\t[%015hx]\n", nb);
	// ft_printf("ft_printf\tflag : [015hx]\t\t[%015hx]\n", nb);
	// printf("printf:\t\tflag : [#015hx]\t\t[%#015hx]\n", nb);
	// ft_printf("ft_printf\tflag : [#015hx]\t\t[%#015hx]\n", nb);
	// ft_printf("ft_printf\tflag : [#25.5hx]\t\t[%#25.5hx]\n", nb);
	// printf("printf:\t\tflag : [#25.5hx]\t\t[%#25.5hx]\n", nb);
	// ft_printf("ft_printf\tflag : [#25.55hx]\t\t[%#25.55hx]\n", nb);
	// printf("printf:\t\tflag : [#25.55hx]\t\t[%#25.55hx]\n", nb);
	// ft_printf("ft_printf\tflag : [#55.25hx]\t\t[%#55.25hx]\n", nb);
	// printf("printf:\t\tflag : [#55.25hx]\t\t[%#55.25hx]\n", nb);
	// ft_printf("ft_printf\tflag : [#055.25hx]\t\t[%#055.25hx]\n", nb);
	// printf("printf:\t\tflag : [#055.25hx]\t\t[%#055.25hx]\n", nb);
	// ft_printf("ft_printf\tflag : [-#7.3hx]\t\t[%-#7.3hx]\n", nb);
	// printf("printf:\t\tflag : [-#7.3hx]\t\t[%-#7.3hx]\n", nb);
	// ft_printf("ft_printf\tflag : [-7.3hx]\t\t\t[%-7.3hx]\n", nb);
	// printf("printf:\t\tflag : [-7.3hx]\t\t\t[%-7.3hx]\n\n", nb);
	


	// ft_printf("ft_printf\tflag : [05hx]\t\t[%05hx]\n", nb2);
	// printf("printf:\t\tflag : [05hx]\t\t[%05hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#05X]\t\t[%#05X]\n", nb2);
	// printf("printf:\t\tflag : [#05X]\t\t[%#05X]\n", nb2);
	// ft_printf("ft_printf\tflag : [#5X]\t\t[%#5X]\n", nb2);
	// printf("printf:\t\tflag : [#5X]\t\t[%#5X]\n", nb2);
	// ft_printf("ft_printf\tflag : [5X]\t\t[%5X]\n", nb2);
	// printf("printf:\t\tflag : [5X]\t\t[%5X]\n", nb2);
	// ft_printf("ft_printf\tflag : [X]\t\t[%X]\n", nb2);
	// printf("printf:\t\tflag : [X]\t\t[%X]\n", nb2);
	// ft_printf("ft_printf\tflag : [#.5hx]\t\t[%#.5hx]\n", nb2);
	// printf("printf:\t\tflag : [#.5hx]\t\t[%#.5hx]\n", nb2);
	// printf("printf:\t\tflag : [05.3hx]\t\t[%05.3hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [05.3hx]\t\t[%05.3hx]\n", nb2);
	// printf("printf:\t\tflag : [015hx]\t\t[%015hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [015hx]\t\t[%015hx]\n", nb2);
	// printf("printf:\t\tflag : [#015hx]\t\t[%#015hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#015hx]\t\t[%#015hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#25.5hx]\t\t[%#25.5hx]\n", nb2);
	// printf("printf:\t\tflag : [#25.5hx]\t\t[%#25.5hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#25.55hx]\t\t[%#25.55hx]\n", nb2);
	// printf("printf:\t\tflag : [#25.55hx]\t\t[%#25.55hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#55.25hx]\t\t[%#55.25hx]\n", nb2);
	// printf("printf:\t\tflag : [#55.25hx]\t\t[%#55.25hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#055.25hx]\t\t[%#055.25hx]\n", nb2);
	// printf("printf:\t\tflag : [#055.25hx]\t\t[%#055.25hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [-#7.3hx]\t\t[%-#7.3hx]\n", nb2);
	// printf("printf:\t\tflag : [-#7.3hx]\t\t[%-#7.3hx]\n", nb2);
	// ft_printf("ft_printf\tflag : [-7.3hx]\t\t\t[%-7.3hx]\n", nb2);
	// printf("printf:\t\tflag : [-7.3hx]\t\t\t[%-7.3hx]\n\n", nb2);

	// ft_printf("ft_printf\tflag : [05hx]\t\t[%05hx]\n", nb3);
	// printf("printf:\t\tflag : [05hx]\t\t[%05hx]\n", nb3);
	// ft_printf("ft_printf\tflag : [#05X]\t\t[%#05X]\n", nb3);
	// printf("printf:\t\tflag : [#05X]\t\t[%#05X]\n", nb3);
	// ft_printf("ft_printf\tflag : [#5X]\t\t[%#5X]\n", nb3);
	// printf("printf:\t\tflag : [#5X]\t\t[%#5X]\n", nb3);
	// ft_printf("ft_printf\tflag : [#.5hx]\t\t[%#.5hx]\n", nb3);
	// printf("printf:\t\tflag : [#.5hx]\t\t[%#.5hx]\n", nb3);
	// printf("printf:\t\tflag : [05.3hx]\t\t[%05.3hx]\n", nb3);
	// ft_printf("ft_printf\tflag : [05.3hx]\t\t[%05.3hx]\n", nb3);
	// printf("printf:\t\tflag : [015hx]\t\t[%015hx]\n", nb3);
	// ft_printf("ft_printf\tflag : [015hx]\t\t[%015hx]\n", nb3);
	// printf("printf:\t\tflag : [#015hx]\t\t[%#015hx]\n", nb3);
	// ft_printf("ft_printf\tflag : [#015hx]\t\t[%#015hx]\n", nb3);
	// ft_printf("ft_printf\tflag : [#25.5hx]\t\t[%#25.5hx]\n", nb3);
	// printf("printf:\t\tflag : [#25.5hx]\t\t[%#25.5hx]\n", nb3);
	// ft_printf("ft_printf\tflag : [#25.55hx]\t\t[%#25.55hx]\n", nb3);
	// printf("printf:\t\tflag : [#25.55hx]\t\t[%#25.55hx]\n", nb3);
	// ft_printf("ft_printf\tflag : [#55.25hx]\t\t[%#55.25hx]\n", nb3);
	// printf("printf:\t\tflag : [#55.25hx]\t\t[%#55.25hx]\n", nb3);
	// ft_printf("ft_printf\tflag : [#055.25hx]\t\t[%#055.25hx]\n", nb3);
	// printf("printf:\t\tflag : [#055.25hx]\t\t[%#055.25hx]\n\n", nb3);
	// ft_printf("ft_printf\tflag : [-#7.3hx]\t\t[%-#7.3hx]\n", nb3);
	// printf("printf:\t\tflag : [-#7.3hx]\t\t[%-#7.3hx]\n", nb3);
	// ft_printf("ft_printf\tflag : [-7.3hx]\t\t\t[%-7.3hx]\n", nb3);
	// printf("printf:\t\tflag : [-7.3hx]\t\t\t[%-7.3hx]\n\n", nb3);
	
	// ft_printf("ft_printf\tflag : [#lX]\t\t[%#lX]\n", nb2);
	// printf("printf:\t\tflag : [#lX]\t\t[%#lX]\n", nb2);
	// ft_printf("ft_printf\tflag : [#lx]\t\t[%#lx]\n", nb2);
	// printf("printf:\t\tflag : [#lx]\t\t[%#lx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#lo]\t\t[%#lo]\n", nb2);
	// printf("printf:\t\tflag : [#lo]\t\t[%#lo]\n\n", nb2);

	// ft_printf("ft_printf\tflag : [#25lX]\t\t[%#25lX]\n", nb2);
	// printf("printf:\t\tflag : [#25lX]\t\t[%#25lX]\n", nb2);
	// ft_printf("ft_printf\tflag : [#25lx]\t\t[%#25lx]\n", nb2);
	// printf("printf:\t\tflag : [#25lx]\t\t[%#25lx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#25lo]\t\t[%#25lo]\n", nb2);
	// printf("printf:\t\tflag : [#25lo]\t\t[%#25lo]\n\n", nb2);
	 
	// ft_printf("ft_printf\tflag : [#-25lX]\t\t[%#-25lX]\n", nb2);
	// printf("printf:\t\tflag : [#-25lX]\t\t[%#-25lX]\n", nb2);
	// ft_printf("ft_printf\tflag : [#-25lx]\t\t[%#-25lx]\n", nb2);
	// printf("printf:\t\tflag : [#-25lx]\t\t[%#-25lx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#-25lo]\t\t[%#-25lo]\n", nb2);
	// printf("printf:\t\tflag : [#-25lo]\t\t[%#-25lo]\n\n", nb2);

	// ft_printf("ft_printf\tflag : [#.25lX]\t\t[%#.25lX]\n", nb2);
	// printf("printf:\t\tflag : [#.25lX]\t\t[%#.25lX]\n", nb2);
	// ft_printf("ft_printf\tflag : [#.25lx]\t\t[%#.25lx]\n", nb2);
	// printf("printf:\t\tflag : [#.25lx]\t\t[%#.25lx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#.25lo]\t\t[%#.25lo]\n", nb2);
	// printf("printf:\t\tflag : [#.25lo]\t\t[%#.25lo]\n\n", nb2);

	// ft_printf("ft_printf\tflag : [#42.25lX]\t\t[%#42.25lX]\n", nb2);
	// printf("printf:\t\tflag : [#42.25lX]\t\t[%#42.25lX]\n", nb2);
	// ft_printf("ft_printf\tflag : [#42.25lx]\t\t[%#42.25lx]\n", nb2);
	// printf("printf:\t\tflag : [#42.25lx]\t\t[%#42.25lx]\n", nb2);
	// ft_printf("ft_printf\tflag : [#42.25lo]\t\t[%#42.25lo]\n", nb2);
	// printf("printf:\t\tflag : [#42.25lo]\t\t[%#42.25lo]\n\n", nb2);

	// ft_printf("ft_printf\tflag : [#-42.25lX]\t\t[%#-42.25lX]\n", LONG_MAX);
	// printf("printf:\t\tflag : [#-42.25lX]\t\t[%#-42.25lX]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [#-42.25lx]\t\t[%#-42.25lx]\n", LONG_MAX);
	// printf("printf:\t\tflag : [#-42.25lx]\t\t[%#-42.25lx]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [#-42.25lo]\t\t[%#-42.25lo]\n", LONG_MAX);
	// printf("printf:\t\tflag : [#-42.25lo]\t\t[%#-42.25lo]\n\n", LONG_MAX);

	// ft_printf("ft_printf\tflag : [#25.42lX]\t\t[%#25.42lX]\n", LONG_MAX);
	// printf("printf:\t\tflag : [#25.42lX]\t\t[%#25.42lX]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [#25.42lx]\t\t[%#25.42lx]\n", LONG_MAX);
	// printf("printf:\t\tflag : [#25.42lx]\t\t[%#25.42lx]\n", LONG_MAX);
	// ft_printf("ft_printf\tflag : [#25.42lo]\t\t[%#25.42lo]\n", LONG_MAX);
	// printf("printf:\t\tflag : [#25.42lo]\t\t[%#25.42lo]\n\n", LONG_MAX);

// 	unsigned short		nb;
// 	nb = 12554;

// 	ft_printf("%hx\n", nb);
// 	printf("%hx\n", nb);
// 	ft_printf("test X:%hX\n", nb);
// 	printf("test X:%hX\n", nb);
// 	ft_printf("Hash:%#hx\n", nb);
// 	printf("Hash:%#hx\n", nb);
// 	ft_printf("prec / grande:%.5hx\n", nb);
// 	printf("prec / grande:%.5hx\n", nb);
// 	ft_printf("hash + prec / grande:%#.5hx\n", nb);
// 	printf("hash + prec / grande:%#.5hx\n", nb);
// 	ft_printf("hash + prec / petite:%#.1hx\n", nb);
// 	printf("hash + prec / petite:%#.1hx\n", nb);
// 	ft_printf("prec + 0: %0.5hx\n", nb);
// 	printf("prec + 0: %0.5hx\n", nb);
// 	ft_printf("Prec + minus:%-.5hx\n", nb);
// 	printf("Prec + minus:%-.5hx\n", nb);
// 	ft_printf("size:%5hx\n", nb);
// 	printf("size:%5hx\n", nb);
// 	ft_printf("size + prec:%7.3hx\n", nb);
// 	printf("size + prec:%7.3hx\n", nb);
// 	ft_printf("size + mminus:%-5hx\n", nb);
// 	printf("size + mminus:%-5hx\n", nb);
// 	ft_printf("size + 0:%05hx\n", nb);
// 	printf("size + 0:%05hx\n", nb);
// 	ft_printf("size + 0 + hash:%#05hx\n", nb);
// 	printf("size + 0 + hash:%#05hx\n", nb);
	




// printf("015hx:\t\t[%015hx]\n", nb);
// ft_printf("015hx:\t\t[%015hx]\n", nb);
// printf("#015hx:\t\t[%#015hx]\n", nb);
// ft_printf("#015hx:\t\t[%#015hx]\n", nb);
// printf("#5hx:\t\t[%#5hx]\n", nb);
// ft_printf("#5hx:\t\t[%#5hx]\n", nb);
// printf("5hx:\t\t[%5hx]\n", nb);
// ft_printf("5hx:\t\t[%5hx]\n", nb);
// printf("#10hx:\t\t[%#10hx]\n", nb);
// ft_printf("#10hx:\t\t[%#10hx]\n", nb);
// printf("10hx:\t\t[%10hx]\n", nb);
// ft_printf("10hx:\t\t[%10hx]\n", nb);
// printf("#1hx:\t\t[%#1hx]\n", nb);
// ft_printf("#1hx:\t\t[%#1hx]\n", nb);
// printf("#.5hx:\t\t[%#.5hx]\n", nb);
// ft_printf("#.5hx:\t\t[%#.5hx]\n", nb);
// printf("#5.5hx:\t\t[%#5.5hx]\n", nb);
// ft_printf("#5.5hx:\t\t[%#5.5hx]\n", nb);
// printf("#5.1hx:\t\t[%#5.1hx]\n", nb);
// ft_printf("#5.1hx:\t\t[%#5.1hx]\n", nb);
// printf("#1.5hx:\t\t[%#1.5hx]\n", nb);
// ft_printf("#1.5hx:\t\t[%#1.5hx]\n", nb);
// printf("15.7hx:\t\t[%15.7hx]\n", nb);
// ft_printf("15.7hx:\t\t[%15.7hx]\n", nb);
// printf("#15.7hx:\t[%#15.7hx]\n", nb);
// ft_printf("#15.7hx:\t[%#15.7hx]\n", nb);


// int		nb = 12345;
	
// 	ft_printf("%x\n", nb);
// 	printf("%x\n", nb);

// 	ft_printf("test X:%X\n", nb);
// 	printf("test X:%X\n", nb);

// 	ft_printf("Hash:%#X\n", nb);
// 	printf("Hash:%#X\n", nb);

// 	ft_printf("prec / grande:%.5X\n", nb);
// 	printf("prec / grande:%.5X\n", nb);

// 	ft_printf("prec / petite:%.0X\n", nb);
// 	printf("prec / petite:%.0X\n", nb);

// 	ft_printf("hash + prec / grande:%#.5X\n", nb);
// 	printf("hash + prec / grande:%#.5X\n", nb);

// 	ft_printf("hash + prec / petite:%#.1X\n", nb);
// 	printf("hash + prec / petite:%#.1X\n", nb);

// 	ft_printf("prec + 0: %0.5X\n", nb);
// 	printf("prec + 0: %0.5X\n", nb);

// 	ft_printf("Prec + minus:%-.5X\n", nb);
// 	printf("Prec + minus:%-.5X\n", nb);

// 	ft_printf("size:%5X\n", nb);
// 	printf("size:%5X\n", nb);

// 	ft_printf("size + prec:%7.3X\n", nb);
// 	printf("size + prec:%7.3X\n", nb);

// 	ft_printf("size + mminus:%-5X\n", nb);
// 	printf("size + mminus:%-5X\n", nb);

// 	ft_printf("size + 0:%05X\n", nb);
// 	printf("size + 0:%05X\n", nb);

// 	ft_printf("size + 0 + hash:%#05X\n", nb);
// 	printf("size + 0 + hash:%#05X\n", nb);

// 	ft_printf("size + 0 + prec:%05.3X\n", nb);
// 	printf("size + 0 + prec:%05.3X\n", nb);

// 	ft_printf("size + minus + prec:%-5.3X\n", nb);
// 	printf("size + minus + prec:%-5.3X\n", nb);

// 	ft_printf("size + hash + 0 + prec:%#05.3X\n", nb);
// 	printf("size + hash + 0 + prec:%#05.3X\n", nb);

// 	ft_printf("size + hash + 0 + prec:%0#5.3X\n", nb);
// 	printf("size + hash + 0 + prec:%0#5.3X\n", nb);

// 	ft_printf("size + hash + minus + prec:%-#7.3X\n", nb);
// 	printf("size + hash + minus + prec:%-#7.3X\n", nb);
/*
	****************************************
				END SHARP OCTAL/HEX TEST
	*****************************************
*/

//******************************************************
/*
	****************************************
				START FLOAT TEST
	*****************************************
*/

// ft_printf("%.1050Lf\n", LDBL_MAX);
// printf("%.1050Lf\n", LDBL_MAX);

// ft_printf("%llx\n", (unsigned long long)-100);
// printf("%llx\n", (unsigned long long)-100);

nb = -25632.2541;
ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
printf("printf:\t\tflag : [.0]\t\t[%.0f]\n\n", nb);
nb = -25632.2;
ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
printf("printf:\t\tflag : [.0]\t\t[%.0f]\n\n", nb);
nb = -1.023;
ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
printf("printf:\t\tflag : [.0]\t\t[%.0f]\n\n", nb);
nb = 12.5;
ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
printf("printf:\t\tflag : [.0]\t\t[%.0f]\n\n", nb);

	ft_printf("ft_printf\tflag : [ ]\t\t[% f]\n", nb);
	printf("printf:\t\tflag : [ ]\t\t[% f]\n", nb);
	ft_printf("ft_printf\tflag : [rien]\t\t[%f]\n", nb);
	printf("printf:\t\tflag : [rien]\t\t[%f]\n", nb);
	
	ft_printf("ft_printf\tflag : [.1]\t\t[%.1f]\n", nb);
	printf("printf:\t\tflag : [.1]\t\t[%.1f]\n", nb);

	printf("printf:\t\tflag : [.2]\t\t[%.2f]\n", nb);

nb = -123.58460;

	ft_printf("ft_printf\tflag : [.1]\t\t[%.1f]\n", nb);
	printf("printf:\t\tflag : [.1]\t\t[%.1f]\n", nb);
nb = -122.58460;

	ft_printf("ft_printf\tflag : [.1]\t\t[%.1f]\n", nb);
	printf("printf:\t\tflag : [.1]\t\t[%.1f]\n", nb);
nb = -12.5;

	ft_printf("ft_printf\tflag : [.1]\t\t[%.1f]\n", nb);
	printf("printf:\t\tflag : [.1]\t\t[%.1f]\n", nb);
	// printf("printf:\t\tflag : [.2]\t\t[%.2f]\n", nb);
nb = -12.55;

	ft_printf("ft_printf\tflag : [.1]\t\t[%.1f]\n", nb);
	printf("printf:\t\tflag : [.1]\t\t[%.1f]\n", nb);
	// printf("printf:\t\tflag : [.2]\t\t[%.2f]\n", nb);

nb = -13.5;

	ft_printf("ft_printf\tflag : [.1]\t\t[%.1f]\n", nb);
	printf("printf:\t\tflag : [.1]\t\t[%.1f]\n", nb);
	// printf("printf:\t\tflag : [.2]\t\t[%.2f]\n", nb);
nb = -13.55;

	ft_printf("ft_printf\tflag : [.1]\t\t[%.1f]\n", nb);
	printf("printf:\t\tflag : [.1]\t\t[%.1f]\n", nb);

nb = -120.58460;
	// ft_printf("ft_printf\tflag : [ ]\t\t[% f]\n", nb);
	// printf("printf:\t\tflag : [ ]\t\t[% f]\n", nb);
	// ft_printf("ft_printf\tflag : [rien]\t\t[%f]\n", nb);
	// printf("printf:\t\tflag : [rien]\t\t[%f]\n", nb);
	
	ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
	printf("printf:\t\tflag : [.0]\t\t[%.0f]\n", nb);
	// printf("printf:\t\tflag : [.2]\t\t[%.2f]\n", nb);

nb = -123.58460;

	ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
	printf("printf:\t\tflag : [.0]\t\t[%.0f]\n", nb);
nb = -122.58460;

	ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
	printf("printf:\t\tflag : [.0]\t\t[%.0f]\n", nb);
nb = -12.5;

	ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
	printf("printf:\t\tflag : [.0]\t\t[%.0f]\n", nb);
	// printf("printf:\t\tflag : [.2]\t\t[%.2f]\n", nb);
nb = -12.55;

	ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
	printf("printf:\t\tflag : [.0]\t\t[%.0f]\n", nb);
	// printf("printf:\t\tflag : [.2]\t\t[%.2f]\n", nb);

nb = -13.5;

	ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
	printf("printf:\t\tflag : [.0]\t\t[%.0f]\n", nb);
	// printf("printf:\t\tflag : [.2]\t\t[%.2f]\n", nb);
nb = -0.0/0;

	ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
	printf("printf:\t\tflag : [.0]\t\t[%.0f]\n", nb);


	ft_printf("ft_printf\tflag : [.2]\t\t[%.2f]\n", nb);
	printf("printf:\t\tflag : [.2]\t\t[%.2f]\n", nb);
	ft_printf("ft_printf\tflag : [.0]\t\t[%.0f]\n", nb);
	printf("printf:\t\tflag : [.0]\t\t[%.0f]\n", nb);
	ft_printf("ft_printf\tflag : [.50]\t\t[%.50f]\n", nb);
	printf("printf:\t\tflag : [.50]\t\t[%.50f]\n", nb);
	ft_printf("ft_printf\tflag : [.14]\t\t[%.14f]\n", nb);
	printf("printf:\t\tflag : [.14]\t\t[%.14f]\n", nb);
	ft_printf("ft_printf\tflag : [.]\t\t[%.f]\n", nb);
	printf("printf:\t\tflag : [.]\t\t[%.f]\n", nb);
	ft_printf("ft_printf\tflag : [25]\t\t[%25f]\n", nb);
	printf("printf:\t\tflag : [25]\t\t[%25f]\n", nb);
	ft_printf("ft_printf\tflag : [0]\t\t[%0f]\n", nb);
	printf("printf:\t\tflag : [0]\t\t[%0f]\n", nb);
	ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0f]\n", nb);
	printf("printf:\t\tflag : [0.0]\t\t[%0.0f]\n", nb);
	ft_printf("ft_printf\tflag : [2]\t\t[%2f]\n", nb);
	printf("printf:\t\tflag : [2]\t\t[%2f]\n", nb);
	ft_printf("ft_printf\tflag : [025]\t\t[%025f]\n", nb);
	printf("printf:\t\tflag : [025]\t\t[%025f]\n", nb);
	ft_printf("ft_printf\tflag : [#]\t\t[%#.f]\n", nb);
	printf("printf:\t\tflag : [#]\t\t[%#.f]\n", nb);
	ft_printf("ft_printf\tflag : [25.3]\t\t[%25.3f]\n", nb);
	printf("printf:\t\tflag : [25.3]\t\t[%25.3f]\n", nb);
	ft_printf("ft_printf\tflag : [#25.]\t\t[%#25.f]\n", nb);
	printf("printf:\t\tflag : [#25.]\t\t[%#25.f]\n", nb);

	ft_printf("ft_printf\tflag : [+]\t\t[%+f]\n", nb);
	printf("printf:\t\tflag : [+]\t\t[%+f]\n", nb);
	ft_printf("ft_printf\tflag : [+.1]\t\t[%+.1f]\n", nb);
	printf("printf:\t\tflag : [+.1]\t\t[%+.1f]\n", nb);
	ft_printf("ft_printf\tflag : [+.0]\t\t[%+.0f]\n", nb);
	printf("printf:\t\tflag : [+.0]\t\t[%+.0f]\n", nb);
	ft_printf("ft_printf\tflag : [+.50]\t\t[%+.50f]\n", nb);
	printf("printf:\t\tflag : [+.50]\t\t[%+.50f]\n", nb);
	ft_printf("ft_printf\tflag : [+.]\t\t[%+.f]\n", nb);
	printf("printf:\t\tflag : [+.]\t\t[%+.f]\n", nb);
	ft_printf("ft_printf\tflag : [+25]\t\t[%+25f]\n", nb);
	printf("printf:\t\tflag : [+25]\t\t[%+25f]\n", nb);
	ft_printf("ft_printf\tflag : [+2]\t\t[%+2f]\n", nb);
	printf("printf:\t\tflag : [+2]\t\t[%+2f]\n", nb);
	ft_printf("ft_printf\tflag : [+025]\t\t[%+025f]\n", nb);
	printf("printf:\t\tflag : [+025]\t\t[%+025f]\n", nb);
	ft_printf("ft_printf\tflag : [+#.]\t\t[%+#.f]\n", nb);
	printf("printf:\t\tflag : [+#.]\t\t[%+#.f]\n", nb);
	ft_printf("ft_printf\tflag : [+25.3]\t\t[%+25.3f]\n", nb);
	printf("printf:\t\tflag : [+25.3]\t\t[%+25.3f]\n", nb);
	ft_printf("ft_printf\tflag : [+#25.]\t\t[%+#25.f]\n", nb);
	printf("printf:\t\tflag : [+#25.]\t\t[%+#25.f]\n", nb);
	ft_printf("ft_printf\tflag : [' ']\t\t[% f]\n", nb);
	printf("printf:\t\tflag : [' ']\t\t[% f]\n", nb);
	ft_printf("ft_printf\tflag : [' '25]\t\t[% 25f]\n", nb);
	printf("printf:\t\tflag : [' '25]\t\t[% 25f]\n", nb);
	ft_printf("ft_printf\tflag : [' '025]\t\t[% 025f]\n", nb);
	printf("printf:\t\tflag : [' '025]\t\t[% 025f]\n", nb);
	ft_printf("ft_printf\tflag : [' '.12]\t\t[% .12f]\n", nb);
	printf("printf:\t\tflag : [' '.12]\t\t[% .12f]\n", nb);
	ft_printf("ft_printf\tflag : [' '-31.12]\t\t[% -31.12f]\n", nb);
	printf("printf:\t\tflag : [' '-31.12]\t\t[% -31.12f]\n", nb);
	ft_printf("ft_printf\tflag : [' '-]\t\t[% -f]\n", nb);
	printf("printf:\t\tflag : [' '-]\t\t[% -f]\n", nb);
	ft_printf("ft_printf\tflag : [' '-.12]\t\t[% -.12f]\n", nb);
	printf("printf:\t\tflag : [' '-.12]\t\t[% -.12f]\n", nb);

	ft_printf("ft_printf\tflag : [' '-31]\t\t[% -31f]\n", nb);
	printf("printf:\t\tflag : [' '-31]\t\t[% -31f]\n", nb);

	ft_printf("ft_printf\tflag : [-#+5.0]\t\t[%-#+5.0f]\n", nb);
	printf("printf:\t\tflag : [-#+5.0]\t\t[%-#+5.0f]\n", nb);
	ft_printf("ft_printf\tflag : [+05.3f]\t\t[%+05.3f]\n", nb);
	printf("printf:\t\tflag : [+05.3f]\t\t[%+05.3f]\n", nb);
	ft_printf("ft_printf\tflag : [+5.3f]\t\t[%+5.3f]\n", nb);
	printf("printf:\t\tflag : [+5.3f]\t\t[%+5.3f]\n", nb);
	ft_printf("ft_printf\tflag : [#0 5.0f]\t\t[%#0 5.0f]\n", nb);
	printf("printf:\t\tflag : [#0 5.0f]\t\t[%#0 5.0f]\n", nb);
	ft_printf("ft_printf\tflag : [#0 6.0f]\t\t[%#0 6.0f]\n", nb);
	printf("printf:\t\tflag : [#0 6.0f]\t\t[%#0 6.0f]\n", nb);
	ft_printf("ft_printf\tflag : [#05.0f]\t\t[%#05.0f]\n", nb);
	printf("printf:\t\tflag : [#05.0f]\t\t[%#05.0f]\n", nb);
	ft_printf("ft_printf\tflag : [#06.0f]\t\t[%#06.0f]\n", nb);
	printf("printf:\t\tflag : [#06.0f]\t\t[%#06.0f]\n", nb);

	ft_printf("space:% f\n", nb);
    printf("space:% f\n\n", nb);

	ft_printf("plus:%+f\n", nb);
	printf("plus:%+f\n\n", nb);
    
	ft_printf("hash:%#f\n", nb);
	printf("hash:%#f\n\n", nb);
    
	ft_printf("precision:%.2f\n", nb);
	printf("precision:%.2f\n\n", nb);
  	
	ft_printf("big prec:%.14f\n", nb);
	printf("big prec:%.14f\n\n", nb);
    
	ft_printf("precision + hash:%#.0f\n", nb);
	printf("precision + hash:%#.0f\n\n", nb);
    
	ft_printf("space + prec:% .5f\n", nb);
	printf("space + prec:% .5f\n\n", nb);
    
	ft_printf("space + prec + hash:%# .0f\n", nb);
	printf("space + prec + hash:%# .0f\n\n", nb);
    
	ft_printf("space + prec + hash:% #.0f\n", nb);
	printf("space + prec + hash:% #.0f\n\n", nb);
    
	ft_printf("Plus + prec / grande:%+.5f\n", nb);
	printf("Plus + prec / grande:%+.5f\n\n", nb);

    ft_printf("Plus + prec / petite:%+.0f\n", nb);
    printf("Plus + prec / petite:%+.0f\n\n", nb);

    ft_printf("Plus + prec + hash:%#+.0f\n", nb);
    printf("Plus + prec + hash:%#+.0f\n\n", nb);

    ft_printf("Prec + 0:%0.5f\n", nb);
    printf("Prec + 0:%0.5f\n\n", nb);

    ft_printf("Prec + minus:%-.5f\n", nb);
    printf("Prec + minus:%-.5f\n\n", nb);
    
	ft_printf("size:%5f\n", nb);
	printf("size:%5f\n\n", nb);

    ft_printf("size + space:% 5f\n", nb);
    printf("size + space:% 5f\n\n", nb);

    ft_printf("size + plus:%+5f\n", nb);
    printf("size + plus:%+5f\n\n", nb);

    ft_printf("size + space:%# 5f\n", nb);
    printf("size + space:%# 5f\n\n", nb);

    ft_printf("size + plus:%#+5f\n", nb);
    printf("size + plus:%#+5f\n\n", nb);

    ft_printf("size + minus:%-5f\n", nb);
    printf("size + minus:%-5f\n\n", nb);

    ft_printf("size + 0:%05f\n", nb);
    printf("size + 0:%05f\n\n", nb);

    ft_printf("size + 0 + plus:%+05f\n", nb);
    printf("size + 0 + plus:%+05f\n\n", nb);
    
	ft_printf("size + 0 + plus:%0+5f\n", nb);
	printf("size + 0 + plus:%0+5f\n\n", nb);

    

    ft_printf("size + 0 + prec + hash:[%#05.0f]\n", nb);
    printf("size + 0 + prec + hash:[%#05.0f]\n\n", nb);

	ft_printf("size + minus + prec + hash:%-#5.0f|\n", nb);
    printf("size + minus + prec + hash:%-#5.0f|\n\n", nb);

    ft_printf("size + plus + 0 + prec:%+05.3f|\n", nb);
    printf("size + plus + 0 + prec:%+05.3f|\n\n", nb);

    ft_printf("size + plus + 0 + prec + hash:%0+#5.0f|\n", nb);
    printf("size + plus + 0 + prec + hash:%0+#5.0f|\n\n", nb);

    ft_printf("ft_printf\tflag : [ 05.3]\t\t[% 05.3f]\n", nb);
	printf("printf:\t\tflag : [ 05.3]\t\t[% 05.3f]\n", nb);
	ft_printf("ft_printf\tflag : [ 5.3]\t\t[% 5.3f]\n", nb);
	printf("printf:\t\tflag : [ 5.3]\t\t[% 5.3f]\n", nb);
	ft_printf("ft_printf\tflag : [05.3]\t\t[%05.3f]\n", nb);
	printf("printf:\t\tflag : [05.3]\t\t[%05.3f]\n", nb);

    ft_printf("size + espace + zero + prec + hash:%#0 5.0f|\n", nb);
    printf("size + espace + zero + prec + hash:%#0 5.0f|\n\n", nb);
	ft_printf("-5.3f\t:[%-5.3f]\n", nb);
    printf("-5.3f\t:[%-5.3f]\n\n", nb);

	ft_printf("size + espace + zero + prec:%0 5.3f|\n", nb);
    printf("size + espace + zero + prec:%0 5.3f|\n\n", nb);

    ft_printf("size + minus + plus + prec:%-+5.3f|\n", nb);
    printf("size + minus + plus + prec:%-+5.3f|\n\n", nb);
	
	ft_printf("size + 0 + prec:%05.3f\n", nb);
    printf("size + 0 + prec:%05.3f\n\n", nb);

	
    ft_printf("size + minus + plus + prec + hash:%-#+5.0f|\n", nb);
    printf("size + minus + plus + prec + hash:%-#+5.0f|\n\n", nb);

	ft_printf("ft_printf\tflag : [ ]\t\t[% f]\n", nb);
	printf("printf:\t\tflag : [ ]\t\t[% f]\n", nb);
	ft_printf("ft_printf\tflag : [- ]\t\t[%- f]\n", nb);
	printf("printf:\t\tflag : [- ]\t\t[%- f]\n", nb);
	ft_printf("ft_printf\tflag : [# ]\t\t[%# f]\n", nb);
	printf("printf:\t\tflag : [# ]\t\t[%# f]\n", nb);
	ft_printf("ft_printf\tflag : [ 25]\t\t[% 25f]\n", nb);
	printf("printf:\t\tflag : [ 25]\t\t[% 25f]\n", nb);
	ft_printf("ft_printf\tflag : [ .18]\t\t[% .18f]\n", nb);
	printf("printf:\t\tflag : [ .18]\t\t[% .18f]\n", nb);
	ft_printf("ft_printf\tflag : [ 025]\t\t[% 025f]\n", nb);
	printf("printf:\t\tflag : [ 025]\t\t[% 025f]\n", nb);
	ft_printf("ft_printf\tflag : [ 025.18]\t\t[% 025.18f]\n", nb);
	printf("printf:\t\tflag : [ 025.18]\t\t[% 025.18f]\n", nb);
	
	// nb = 0.9999;
	// ft_printf("ft_printf\t%-+d|%- d|%-0d|%+ d|%+0d|% 0d|%-+ 0d\n", 0, 0, 0, 0, 0, 0, 0);
	// printf("ft_printf\t%-+d|%- d|%-0d|%+ d|%+0d|% 0d|%-+ 0d", 0, 0, 0, 0, 0, 0, 0);


	// ft_printf("%+.0f\n", 12.5);
	// printf("%+.0f\n", 12.5);

	// ft_printf("%+.0f\n", 12.6);
	// printf("%+.0f\n", 12.6);

	// unsigned int nb;

	// nb = 0;

	// printf("\t-----x-----\n");

	// ft_printf("ft_printf\tflag : [.0]\t\t[%.0x]\n", nb);
	// printf("printf:\t\tflag : [.0]\t\t[%.0x]\n", nb);
	// ft_printf("ft_printf\tflag : [.]\t\t[%.x]\n", nb);
	// printf("printf:\t\tflag : [.]\t\t[%.x]\n", nb);
	// ft_printf("ft_printf\tflag : [12.0]\t\t[%12.0x]\n", nb);
	// printf("printf:\t\tflag : [12.0]\t\t[%12.0x]\n", nb);
	// ft_printf("ft_printf\tflag : [-5.]\t\t[%-5.x]\n", nb);
	// printf("printf:\t\tflag : [-5.]\t\t[%-5.x]\n", nb);
	// ft_printf("ft_printf\tflag : [#.0]\t\t[%#.0x]\n", nb);
	// printf("printf:\t\tflag : [#.0]\t\t[%#.0x]\n", nb);
	// ft_printf("ft_printf\tflag : [#.]\t\t[%#.x]\n", nb);
	// printf("printf:\t\tflag : [#.]\t\t[%#.x]\n", nb);

	// ft_printf("ft_printf\tflag : [#12.0]\t\t[%#12.0x]\n", nb);
	// printf("printf:\t\tflag : [#12.0]\t\t[%#12.0x]\n", nb);
	// ft_printf("ft_printf\tflag : [#-5.]\t\t[%#-5.x]\n", nb);
	// printf("printf:\t\tflag : [#-5.]\t\t[%#-5.x]\n", nb);



	// printf("\t-----o-----\n");
	// nb = 0;

	// ft_printf("ft_printf\tflag : [.0]\t\t[%.0o]\n", nb);
	// printf("printf:\t\tflag : [.0]\t\t[%.0o]\n", nb);
	// ft_printf("ft_printf\tflag : [.]\t\t[%.o]\n", nb);
	// printf("printf:\t\tflag : [.]\t\t[%.o]\n", nb);
	// ft_printf("ft_printf\tflag : [12.0]\t\t[%12.0o]\n", nb);
	// printf("printf:\t\tflag : [12.0]\t\t[%12.0o]\n", nb);
	// ft_printf("ft_printf\tflag : [-5.]\t\t[%-5.o]\n", nb);
	// printf("printf:\t\tflag : [-5.]\t\t[%-5.o]\n", nb);
	// ft_printf("ft_printf\tflag : [#.0]\t\t[%#.0o]\n", nb);
	// printf("printf:\t\tflag : [#.0]\t\t[%#.0o]\n", nb);
	// ft_printf("ft_printf\tflag : [#.]\t\t[%#.o]\n", nb);
	// printf("printf:\t\tflag : [#.]\t\t[%#.o]\n", nb);
	// ft_printf("ft_printf\tflag : [#12.0]\t\t[%#12.0o]\n", nb);
	// printf("printf:\t\tflag : [#12.0]\t\t[%#12.0o]\n", nb);
	// ft_printf("ft_printf\tflag : [#-5.]\t\t[%#-5.o]\n", nb);
	// printf("printf:\t\tflag : [#-5.]\t\t[%#-5.o]\n", nb);


// int		nb;
// 	nb = 123564789;
// 	ft_printf("%x\n", nb);
// 	printf("%x\n", nb);
// 	ft_printf("test X:%X\n", nb);
// 	printf("test X:%X\n", nb);
// 	ft_printf("Hash:%#X\n", nb);
// 	printf("Hash:%#X\n", nb);
// 	ft_printf("prec / grande:%.5X\n", nb);
// 	printf("prec / grande:%.5X\n", nb);
// 	ft_printf("hash + prec / grande:%#.5X\n", nb);
// 	printf("hash + prec / grande:%#.5X\n", nb);
// 	ft_printf("hash + prec / petite:%#.1X\n", nb);
// 	printf("hash + prec / petite:%#.1X\n", nb);
// 	ft_printf("prec + 0: %0.5X\n", nb);
// 	printf("prec + 0: %0.5X\n", nb);
// 	ft_printf("Prec + minus:%-.5X\n", nb);
// 	printf("Prec + minus:%-.5X\n", nb);
// 	ft_printf("size:%5X\n", nb);
// 	printf("size:%5X\n", nb);
// 	ft_printf("size + prec:%7.3X\n", nb);
// 	printf("size + prec:%7.3X\n", nb);
// 	ft_printf("size + mminus:%-5X\n", nb);
// 	printf("size + mminus:%-5X\n", nb);
// 	ft_printf("size + 0:%05X\n", nb);
// 	printf("size + 0:%05X\n", nb);
// 	ft_printf("size + 0 + hash:%#05X\n", nb);
// 	printf("size + 0 + hash:%#05X\n", nb);
// 	ft_printf("size + 0 + prec:%05.3X\n", nb);
// 	printf("size + 0 + prec:%05.3X\n", nb);
// 	ft_printf("size + minus + prec:%-5.3X\n", nb);
// 	printf("size + minus + prec:%-5.3X\n", nb);
// 	ft_printf("size + hash + 0 + prec:%#05.3X\n", nb);
// 	printf("size + hash + 0 + prec:%#05.3X\n", nb);
// 	ft_printf("size + hash + 0 + prec:%0#5.3X\n", nb);
// 	printf("size + hash + 0 + prec:%0#5.3X\n", nb);
// 	ft_printf("size + hash + minus + prec:[%-#7.3X]\n", nb);
// 	printf("size + hash + minus + prec:[%-#7.3X]\n", nb);
// 	printf("-#7.3X\n");
// ft_printf("[%#05.3X]\n", 12);
// printf("[%#05.3X]\n", 12);


// ft_printf("%Lf\n", LDBL_MAX);
// printf("%Lf\n\n", LDBL_MAX);
// ft_printf("%.700Lf\n", LDBL_MIN);
// printf("%.700Lf\n\n", LDBL_MIN);
// ft_printf("%lf\n", DBL_MAX);
// printf("%lf\n\n", DBL_MAX);
// ft_printf("%.700lf\n", DBL_MIN);
// printf("%.700lf\n\n", DBL_MIN);
// ft_printf("%f\n", FLT_MAX);
// printf("%f\n\n", FLT_MAX);
// ft_printf("%.400f\n", FLT_MIN);
// printf("%.400f\n\n", FLT_MIN);

//***********************************************************************************//

//  double u = 99.999999;
// ft_printf("%.f\n",u);
// printf("%.f\n\n",u);
// ft_printf("%ld\n",0xff11ff11ff88);
// printf("%ld\n\n",0xff11ff11ff88);
//
// double f = -45.3482634723;
// ft_printf("mine = %-5f|\n",-f);
// printf("reel = %-5f|\n",-f);
	return (0);
}
