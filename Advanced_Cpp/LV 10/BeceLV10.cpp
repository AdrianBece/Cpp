// BeceLV10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
struct podaci
	{
	char ime[20],prezime[20],adresa[50],tel[20];
	}kup;
int n=0,i;
FILE *f;
printf("\nBroj kupaca: ");
scanf("%d",&n);
f=fopen ("kupci.txt","w");
if (f==NULL)
{ 
	printf ("\nGreska pri otvaranju.");
	return 1;
	}
for (i=0; i<n; i++)
{ printf ("\n---------------------\nPODACI %d. KUPCA: ",i+1);
printf ("\nIme: ");
scanf ("%s",kup.ime);
printf ("\nPrezime: ");
scanf ("%s",kup.prezime);
printf ("\nAdresa: ");
scanf ("%s",kup.adresa);
printf("\nTelefon: ");
scanf ("%s",kup.tel);
fprintf (f,"%d. KUPAC\t%s\t%s\t%s\t%s\n",i+1, kup.prezime, kup.ime, kup.adresa, kup.tel);
}
fclose (f);
}

