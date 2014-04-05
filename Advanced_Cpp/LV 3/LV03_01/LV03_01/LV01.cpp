#include<iostream>
using namespace std;

class Vector
{
private:
float ax, ay;
public:
Vector(float a = 0, float b = 0) : ax(a), ay(b) {cout<<endl<<"** pozvan konstruktor iz Vector **"<<endl;}
void Setxy(float x, float y) { ax = x; ay = y; cout<<endl<<"** pozvan setxy iz Vector **"<<endl;}
float Getx() { return ax; cout<<endl<<"** pozvan return ax iz Vector **"<<endl;}
float Gety() { return ay; cout<<endl<<"** pozvan return ay iz Vector **"<<endl; }
~Vector(){cout<<endl<<"** Pozvan destruktor iz klase Vector **"<<endl;};
};

class Cplx_publ : public Vector
{
public:
Cplx_publ(float a = 0, float b = 0) : Vector(a, b) {cout<<endl<<"** pozvan konstruktor iz cplx_public **"<<endl;}
using Vector::Setxy;
using Vector::Getx;
using Vector::Gety;
};

class Cplx_priv : private Vector
{
public:
Cplx_priv(float a = 0, float b = 0) : Vector(a, b) {cout<<endl<<"** pozvan konstruktor iz cplx_priv **"<<endl;}
using Vector::Setxy;
using Vector::Getx;
using Vector::Gety;
};

class Cplx_prot : protected Vector
{
public:
Cplx_prot(float a = 0, float b = 0) : Vector(a, b) {cout<<endl<<"** pozvan konstruktor iz cplx_prot **"<<endl;}
using Vector::Setxy;
using Vector::Getx;
using Vector::Gety;
};

void main()
{
	Cplx_publ x_publ;
	Cplx_priv x_priv;
	Cplx_prot x_prot;
	x_publ.Setxy(1,1);
	x_priv.Setxy(2,2);
	x_prot.Setxy(3,3);
	cout<<endl<<"Public nasljedivanje: "<<endl<<x_publ.Getx()<<" , "<<x_publ.Gety()<<endl;
	cout<<endl<<"Private nasljedivanje: "<<endl<<x_priv.Getx()<<" , "<<x_priv.Gety()<<endl;
	cout<<endl<<"Protected nasljedivanje: "<<endl<<x_prot.Getx()<<" , "<<x_prot.Gety()<<endl;
}
