#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
	int i, cij;
	float re;
	ofstream izl ("zadatak_1.txt"); 
	for(i=0;i<10;i++)
	{
		cout << endl << "Unesite " <<i+1<<". cijeli broj: ";
		cin >> cij;
		cout << endl << "Unesite " <<i+1<<". realni broj: "; 
		cin >> re;
		izl << cij << " , " << re << endl;
	}
	return 0;
}