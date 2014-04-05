// Bece_LV6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
int i,n,V[50],*pok;
float s=0,a;
pok=V;
do
	{
	printf("\n Unesite velicinu polja (od 0 do 50):");
	scanf("%d",&n);
	}
while (n<1 || n>50);
for(i=0;i<n;i++)
	{
	printf ("\nElement %d: ",i);
	scanf("%d",pok+i);
	s+=*(pok+i);
	}
a=s/n;
//ISPIS
printf ("\nINDEKS\tVRIJEDNOST\tMEMORIJSKA ADRESA\n");
for(i=0;i<n;i++)
	{
	printf ("\n %d \t %d \t\t %d ",i,*(pok+i),pok+i);
	}
printf("\n\nSREDNJA VRIJEDNOST NIZA IZNOSI %.2f\n\n",a);
}