
#include <iostream>
using namespace std;

class KompleksniBroj
{
 public:
 KompleksniBroj(float x = 0, float y = 0) { re = x; im = y; } 
 void postavi(float , float); 
 friend ostream& operator << (ostream& izlaz, KompleksniBroj& kb); 
 friend const KompleksniBroj operator / (const KompleksniBroj& x, const KompleksniBroj& y); 
 friend const KompleksniBroj operator *  (const KompleksniBroj& x, const KompleksniBroj& y);
 friend const KompleksniBroj operator - (const KompleksniBroj&x, const KompleksniBroj& y);
 
private:
 float im, re; 
 };

ostream& operator << (ostream& izlaz, KompleksniBroj& kb)
{
	izlaz << kb.re;
	if(kb.im >=0) izlaz << "+";
	izlaz << kb.im << "i";
	return izlaz;
}


void KompleksniBroj :: postavi(float x, float y)
{
   re = x; 
   im = y;
 }

 const KompleksniBroj  operator / (const KompleksniBroj& x, const KompleksniBroj& y)
  {
    KompleksniBroj t;
    t.re = (x.re * y.re + x.im * y.im) / (y.re*y.re+y.im * y.im);
    t.im = (y.re * x.im - x.re * y.im) / (y.re*y.re+y.im * y.im);   
    return t;
  }

 const KompleksniBroj  operator - (const KompleksniBroj& x, const KompleksniBroj& y)
  {
    KompleksniBroj t;
    t.re = x.re - y.re;
    t.im =  x.im - y.im;  
    return t;
  }

 const KompleksniBroj  operator * ( const KompleksniBroj& x, const KompleksniBroj& y) 
  {
    KompleksniBroj t;
    t.re = x.re*y.re - x.im*y.im;
	t.im = x.re*y.im + y.re*x.im;   
    return t; 
  }

void main()
{ 
  KompleksniBroj kb1, kb2, kb3;
  float re, im;
  cout <<"--- ADRIAN BECE, 3242, R1 ---"<<endl<<endl;
  cout << "1. KOMPLEKSNI BROJ:" << endl;
  cout << "Unesite realni dio: ";
  cin >> re;
  cout << "Unesite imaginarni dio: ";
  cin >> im;
  kb1.postavi(re, im); 
  cout << endl << "2. KOMPLEKSNI BROJ:" << endl;
  cout << "Unesite realni dio: ";
  cin >> re;
  cout << "Unesite imaginarni dio: ";
  cin >> im;
  kb2.postavi(re, im); 
  cout << endl << "KVOCIJENT KOMPLEKSNIH BROJEVA IZNOSI:" <<endl;
  kb3 = kb1 / kb2;
  cout <<kb1<< " / "<<kb2<<" = "<< kb3;
  cout << endl;
  cout << endl << "RAZLIKA KOMPLEKSNIH BROJEVA IZNOSI:" <<endl;
  kb3 = kb1 - kb2;
  cout <<kb1<< " - ("<<kb2<<") = "<< kb3;
  cout << endl;
  cout << endl << "UMNOZAK KOMPLEKSNIH BROJEVA IZNOSI:" <<endl;
  kb3 = kb1 * kb2;      
  cout <<kb1<< " * ("<<kb2<<") = "<< kb3;
  cout << endl << endl;
}