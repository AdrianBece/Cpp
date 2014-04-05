// Bece_LV3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
void main()
{
	int i=0,pronasao=0,r[50],n;
	srand((time(NULL)));
	
	for (i=0;i<50;i++) 
	{
		r[i]=rand()%100 + 1;
	}
	//ISPIS NIZA
	for (i=0;i<50;i++) printf("%d\t", r[i]);
	//UNOS BROJA
	do
	{
		printf("\n\n Unesite broj u intervalu 1 do 100: ");
		scanf("%d",&n);
	}
	while(n<1 && n>100);

	for(i=0;i<50;i++)
	{
		if(r[i]==n)
		{
			pronasao=1; 
			break;
		}
		else i++;
	}
	if(pronasao==1) printf ("\n\n Element je pronadjen nakon %d koraka :) \n",i+1);

	else printf("\n\n Element nije pronadjen u vasem skupu! Pokusajte ponovo! :( \n");
}





