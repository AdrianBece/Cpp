// Bece_LV11_04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main()
{
struct studenti
	{
	char ime[20],prezime[20];
	int ocjena;
	}stud;
int r=0,n=0,i,tr,ocj=0;
char im[20],p[20];
FILE *f;
printf("\nBroj studenata: ");
scanf("%d",&n);
f=fopen ("Student.txt","w+");
if (f==NULL)
{ 
	printf ("\nGreska pri otvaranju.");
	return 1;
	}
for (i=0; i<n; i++)
{ printf ("\n---------------------\nPODACI %d. STUDENTA: ",i+1);
printf ("\nIme: ");
scanf ("%s",stud.ime);
printf ("\nPrezime: ");
scanf ("%s",stud.prezime);
printf ("\nOcjena: ");
scanf ("%d",&stud.ocjena);
fprintf (f,"%d %s %s %d",i+1, stud.prezime, stud.ime, stud.ocjena);
}
fclose(f);
printf("\n\nUnesite ocjenu koju trazite: ");
scanf("%d",&tr);
fopen("Student.txt","r+");
rewind(f);
for (i=0; i<n; i++)
{ 
fscanf (f,"%d %s %s %d",&r,p,im,&ocj);
if(tr==ocj) printf("\n%d. \t%s\t%s\t%d",r,p,im,ocj);
fclose(f);
}
}