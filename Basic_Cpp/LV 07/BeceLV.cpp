// BeceLV.cpp : Defines the entry point for the console application. -
// -------------------------------------------------------------------

#include "stdafx.h"

int main ()
{
int i,n, N[40],*pok,zp=0,zn=0;
pok=&N[0];
do
{
	printf("Unesite duljinu niza n (min 1, max 40): ");
	scanf("%d",&n);
}
while(n<=1 || n>40);
for(i=0;i<n;i++)
{
	printf("\nUnesite element %d: ",i+1);
	scanf("%d",(pok+i));
	if(*(pok+i)%2==0)zp=zp+(*(pok+i));
	else zn=zn+(*(pok+i));
}
for(i=0;i<n;i++)
{
	printf("\n%d",*(pok+i));
}
printf("\nZbroj parnih iznosi %d",zp);
printf("\nZbroj neparnih iznosi %d \n\n",zn);
}


