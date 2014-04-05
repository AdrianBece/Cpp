// Bece_LV5_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string.h>


int main()
{
	int i,dulj,max=0;
	char r[25];
	printf ("\nUnesite rijec: ");
	gets(r);
	dulj=strlen(r);
	for(i=0;i<dulj;i++) 
	{
		if(max<r[i]) max=r[i];
	}
	printf ("\n\nNajvecu vrijednost ima (%c), iznosi: %d \n\n",max,max);
}

