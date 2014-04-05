#include <iostream>
using namespace std;

template <class Tip>
void bubblesort(Tip a [], Tip tmp)
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			 if (a[j+1] > a[j])     
				 { 
					tmp = a[j];         
					a[j] = a[j+1];
					a[j+1] = tmp;
				 }
		}
	}
}

template <class Tip2>
void printdata(Tip2 s)
{
for (int i=0;i<5;i++)
{
	cout<<endl<<s[i];
}
}

void main()
{
	int a[6] = {1,34,6,8,9},tmp1=0;
	double d[6] = {1.1,1.56,1.01,2.51,2.52},tmp2=0;
	char c[7] = {'a','z','h','o','n'},tmp3=0;
	cout<<endl<<"INT: ";
	bubblesort (a,tmp1);
	printdata(a);
	cout<<endl<<"DOUBLE: ";
	bubblesort (d,tmp2);
	printdata(d);
	cout<<endl<<"CHAR: ";
	bubblesort (c,tmp3);
	printdata (c);
}
