// c++ program to convert inches to feet yeards and inches.

#include<iostream.h>
#include<conio.h>
void main()
{
	int i,y,f;
	clrscr();

	cout<<"Enter the inches : ";
	cin>>i;

	y = i/432;
	i = i%432;
	f = i/12;
	i = i%12;

	cout<<"\n after conversion from inches to feet,yeards and inches : \n";
	cout<<"\n yeards = "<<y<<"\n\n feet = "<<f<<"\n\n inches = "<<i<<"\n";
	getch();
}

