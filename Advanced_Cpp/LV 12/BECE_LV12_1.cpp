// BECE_LV12_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain()
{
	int i,k, n[100],ispis=0;
	FILE *f1,*f2;
	printf("Unesite k: ");
	scanf("%d",&k);
	f1=fopen ("ulaz.txt","w+");
	if (f1==NULL)
	{ 
		printf ("\nGreska pri otvaranju.");
		return 1;
	}
	for(i=0;i<k;i++)
	{
		printf("Unesite element niza n[%d]: ",i+1);
		scanf("%d",&n[i]);
		fprintf(f1,"\n%d",n[i]);
	}
rewind(f1);
fclose(f1);
f2=fopen ("izlaz.txt","w+");
f1=fopen ("ulaz.txt","r+");
printf("\n\nISPIS IZLAZA:");
for(i=0;i<k;i++)
{
	fscanf(f1,"\n%d",&ispis);
	fprintf(f2,"\n%d",ispis*3);
	printf("\n%d",ispis*3);
}
printf("\n\n");
}

