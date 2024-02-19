//c++ program to find cube of number using MACROS.

#include<iostream.h>
#include<conio.h>
#define CUBE(x) (x*x*x)
void main()
{
	int n,cube;
	clrscr();

	cout<<"Enter any positive number : ";
	cin>>n;

	cube = CUBE(n);

	cout<<"\n cube of entered number ["<<n<<"] : ["<<cube<<"]\n";
	getch();
}