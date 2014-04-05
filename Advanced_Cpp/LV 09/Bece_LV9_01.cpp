// Bece_LV9_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
FILE *pfajl1, *pfajl2;
int br,i;
char I[30],P[30];
pfajl1=fopen("dat.txt","w+");
fprintf(pfajl1,"%d",3);
rewind(pfajl1);
fscanf(pfajl1,"%d",&br);
fclose(pfajl1);
pfajl2=fopen("studenti.txt","w+");
for(i=1;i<=br;i++)
{
	printf("\n---STUDENT BROJ %d---",i);
	printf("\nIME: ");
	scanf("%s",&I);
	printf("\nPREZIME: ");
	scanf("%s",&P);
fprintf(pfajl2, "\n Ime %d studenta: [%-1.10s] \n Prezime %d studenta: [%-1.10s]", i,I,i,P);
}
fclose(pfajl2);


}

