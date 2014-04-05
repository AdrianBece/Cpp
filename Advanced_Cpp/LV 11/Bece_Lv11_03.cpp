// Bece_Lv11_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int main()
{
struct komplex
{
float re;
float im;
} a;

printf("Unesi kompleksni broj:\n ");
printf("Realni dio: ");
scanf("%f",&a.re);
printf("Imaginarni dio: ");
scanf("%f",&a.im);
printf("\n Konjugirano kompleksni broj: %.2f%+.2fi \n\n",a.re,-a.im);
}


