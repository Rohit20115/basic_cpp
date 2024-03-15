//Write a c++ program to demonstrate the public,protected,and private paramerer.

#include<iostream.h>
#include<conio.h>
class construct
{
	int a,b,c;
	public:
	construct(int m)
	{
		a= m;
		cout<<"a="<<a;
	}
	construct(int p,int q)
	{
		b=p;
		c=q;
		cout<<"\n b="<<b<<"\n a="<<c;
	}
};
void main()
{
	clrscr();
	construct obj1(100),obj2(2,3);
	getch();
}