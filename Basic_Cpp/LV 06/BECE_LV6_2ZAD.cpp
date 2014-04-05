// BECE_LV6_2ZAD.cpp : Defines the entry point for the console application.
// 4

#include "stdafx.h"

float razlika(float *pok1,float *pok2)
{
float r;
r=*pok1-*pok2;
return r;
}

void main()
{
float x,y,*pok1,*pok2;
pok1=&x;
pok2=&y;
printf("\nUnesite x: ");
scanf("%f",pok1);
printf("\nUnesite y: ");
scanf("%f",pok2);
printf("\n%.2f - %.2f = %.2f\n",*pok1,*pok2,razlika(pok1,pok2));
}
