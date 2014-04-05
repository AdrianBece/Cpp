#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
	char i[20],txt;
	cout << endl << "Unesite ime datoteke za otvaranje: ";
	cin >> i;
	cout << endl << endl;
	ifstream dat (i);
	while(dat.get(txt) != NULL) cout << txt;
}