// Bece_Lv2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

int n,m,i,j,bnp=0,M[5][5];
void UPIS ()
	{
		for (i=0;i<n;i++)
		for (j=0;j<m;j++)
		{
		printf("\nElement M[%d][%d]: ",i,j);
		scanf ("%d",&M[i][j]);
		if (M[i][j]%2!=0)
		bnp=bnp+1;
		}
	}
void ISPIS ()
	{
	for (i=0;i<n;i++)
		{
		printf ("\n");
		for (j=0;j<m;j++)
		printf ("\t %d",M[i][j]);
		}
	}
void main()
{
do
		{
		printf("Upisite broj redaka n: ");
		scanf("%d",&n);
		}
	while (n<2||n>5);
do
	{
	printf("\nUpisite broj stupaca m: ");
	scanf("%d",&m);
	}
while (m<2||m>5);
UPIS ();
ISPIS ();
printf ("\n\nBroj neparnih je %d \n ", bnp);
}