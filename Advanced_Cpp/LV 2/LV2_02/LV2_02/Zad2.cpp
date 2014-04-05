#include <iostream>
using namespace std;
class Tocka
{
public: int x,y; 
Tocka(){x=0,y=0; cout<<endl<<"Default kontruktor za tocku (0,0)"<<endl;} 
Tocka(int a,int b){x=a;y=b; cout<<endl<<"Parametarski konstruktor za tocku (10,12)"<<endl;}
};
class Pravac 
{
Tocka *t1, *t2;
public: 
Pravac::Pravac(Tocka *tt1, Tocka *tt2){t1=tt1;t2=tt2; cout<<endl<<"Konstruktor za pravac"<<endl;} 
~Pravac(){delete [] t1; delete [] t2; cout<<endl<<"Destruktor za pravac"<<endl;}
};
void main()
{
	Tocka *ta1 = new Tocka();
	cout <<endl<< "TOCKA (defaultni konstruktor): x =" << ta1->x << ", y = "<<ta1->y<<endl;
	Tocka *ta2 = new Tocka(10,12);
	cout <<endl<< "TOCKA (sa postavljenim parametrima 10,12): x = " << ta2->x << ", y = "<<ta2->y<<endl;
	Pravac P(ta1,ta2);
}