#include <iostream>
using namespace std;

class GraphObject
{
private:
int colour;
public:
GraphObject(){cout<<endl<<"** Pozvan konstruktor iz GraphObject **";}
void SetColour(int newc) { colour = newc; }
int GetColour() { return colour; }
virtual void Draw() = 0;
void Erase();
void Translate(int, int);
void Move(int px, int py);
~GraphObject(){cout<<endl<<"** Pozvan destruktor iz GraphObject **";}
};

class Poly:public virtual GraphObject
{
	public:
	Poly(){cout<<endl<<"** Konstruktor mnogokuta **"<<endl;}
	~Poly(){cout<<endl<<"** Destruktor mnogokuta **"<<endl;}
};

class Quad:public Poly
{
private:
	int stranica;
	public:
	Quad(){cout<<endl<<"** Konstruktor Quad **"<<endl;}
	void Draw() {cout<<endl<<"** Pozvan draw iz Quad **"<<endl;}
	~Quad(){cout<<endl<<"** Destruktor Quad **"<<endl;}
};

class Text:public virtual GraphObject
{
private:
string tmsg;
public:
Text(){cout<<endl<<"** Pozvan konstruktor iz Text **";}
virtual void SetText(string newt){cout<<endl<<"** Pozvan SetText it Text **"<<endl;};
virtual void Draw(){cout<<endl<<"** Pozvan SetText it Text **"<<endl;};
virtual void Erase(){cout<<endl<<"** Pozvan SetText it Text **"<<endl;};
virtual void Translate(int, int){};
virtual ~Text(){cout<<endl<<"** Pozvan Destruktor iz Text **"<<endl;};
};

class TextBox : public Quad, public Text
{
public:
TextBox(){cout<<endl<<"** Pozvan konstruktor iz TextBox **";}
void Draw(){cout<<endl<<"** Pozvan Draw iz TextBox **"<<endl;};
~TextBox(){cout<<endl<<"** Pozvan destruktor iz TextBox **";};

};

void main ()
{
	TextBox TB1;
	GraphObject *p=&TB1; 
	p->Draw();
	TB1.Draw();
}
