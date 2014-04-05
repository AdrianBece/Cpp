// Bece_LV8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
int main()
{
	int n,uc,i;
	float m;
	struct datum
	{
		int dan;
		int mj;
		int god;
		};
	struct ucenik
	{
		char ime[15];
		char pre[15];
		int mat;
		float pr;
		struct datum rodjendan;
	} ucenik[40];
	do
	{
	printf("\nBroj ucenika u razredu: ");
	scanf("%d",&n);
	}
	while(n<1 || n>40);
	printf("\n---UNOS PODATAKA:---");
	for(i=0;i<n;i++)
	{
		printf("\n---%d.UCENIK---",(i+1));
		printf("\nIme: ");
		scanf("%s",&ucenik[i].ime);
		printf("Prezime: ");
		scanf("%s",&ucenik[i].pre);
		printf("Maticni Broj: ");
		scanf("%d",&ucenik[i].mat);
		printf("Prosjek: ");
		scanf("%f",&ucenik[i].pr);
		printf("Dan Rodjenja: ");
		scanf("%d",&ucenik[i].rodjendan.dan);
		printf("Mjesec Rodjenja: ");
		scanf("%d",&ucenik[i].rodjendan.mj);
		printf("Godina Rodjenja: ");
		scanf("%d",&ucenik[i].rodjendan.god);
	}
m=ucenik[0].pr;
for(i=0;i<n;i++)
{
	if(ucenik[i].pr>m)
	{
		m=ucenik[i].pr;
		uc=i;
	}
}
printf("\nUcenik s najvecim prosjekom je:\n%d\t%s\t%s\t%d.%d.%d PROSJEK:%.2f",ucenik[uc].mat,ucenik[uc].pre,ucenik[uc].ime,ucenik[uc].rodjendan.dan,ucenik[uc].rodjendan.mj,ucenik[uc].rodjendan.god,ucenik[uc].pr);
}