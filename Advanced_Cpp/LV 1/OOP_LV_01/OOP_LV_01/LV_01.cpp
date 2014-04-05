#include <iostream>
#include <math.h>
using namespace std;

class kompleksni
{
private: // ne moze se pristupiti iz main funkcije,samo preko funkcije iz klase
	float Re,Im;
public: // moze se pristupiti iz main funkcije
	kompleksni(float x=0, float y=0){Re=x;Im=y;}
	friend float modul (kompleksni &a);
	float modul(); // obicna metoda
};

// definiranje metode van klase (moglo se i kod deklaracije obicne metode)
float modul(kompleksni &a) // ako obicna funkcija zeli pristupiti èlanovima private klase, moramo funkciju deklarirati kao prijatelj funkcije (koristimo reference &a)
{
	return sqrt(a.Re*a.Re + a.Im*a.Im);
}

int main () 
{
	kompleksni K1(5,4);
	cout << modul(K1) << endl << endl; //poziva se kao obicna funkcija, a predaje se objekgt
	return 0;
}