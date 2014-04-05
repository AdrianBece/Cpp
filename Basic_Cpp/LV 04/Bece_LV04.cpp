// Bece_LV04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main()
{
int i,j,p,k;
float A[3][2],B[2][4],C[3][4];
printf("\n--- UNOS MATRICA A: ---\n");
for(i=0;i<3;i++)
{
	for(j=0;j<2;j++)
	{
		printf("A[%d][%d]: ",i+1,j+1);
		scanf("%f",&A[i][j]);
	}
}
printf("\n--- UNOS MATRICA B: ---\n");
for(i=0;i<2;i++)
{
	for(j=0;j<4;j++)
	{
		printf ("B[%d][%d]: ",i+1,j+1);
		scanf ("%f",&B[i][j]);
	}
}
for(i=0; i<3; i++)
{
	for(j=0; j<4; j++)
	{
	C[i][j]=0;
	for(p=0; p<2; p++)
		{
		C[i][j] += A[i][p] * B[p][j];
		}
	}
}
printf ("\n--- ISPIS MATRICA A: ---\n");
for(i=0;i<3;i++)
{
	for(j=0;j<2;j++)
	{
		printf ("%.2f\t",A[i][j]);
	}
	printf ("\n");
}
printf ("\n--- ISPIS MATRICA B: ---\n");
for(i=0;i<2;i++)
{
	for(j=0;j<4;j++)
	{
		printf ("%.2f\t",B[i][j]);
	}
	printf ("\n");
}
printf ("\n--- ISPIS MATRICA C: ---\n");
for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{
		printf ("%.2f\t",C[i][j]);
	}
	printf ("\n");
}
}