#include<iostream.h>
#include<conio.h>
class test1
{
	public:
	test1(int x)
	{
		cout<<"\n x="<<x;


	}
};
class test2:public test1
{
	public:
	test2(int y):test1(y)
	{
		cout<<"\n y="<<y;
	}
};
void main()
{
	clrscr();
	test2 obj(2);
	getch();
}
