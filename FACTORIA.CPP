//find the factorial number using loop in c++ proramming.

#include<iostream.h>
#include<conio.h>
void main()
{
	int n,fact,i;
	clrscr();

	fact = 1;

	cout<<"|n enter the number : ";
	cin>>n;

	for(i=n;i>0;i--)
		fact *=i;
	cout<<"Factorial is " <<fact;
	getch();
}

