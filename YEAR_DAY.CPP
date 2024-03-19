//c++ program to convert days into years weeks and days.

#include<iostream.h>
#include<conio.h>
void main()
{
	int y,d,w;
	clrscr();

	cout<<"Enter the number of days : ";
	cin>>d;

	y = d/365;
	d = d%365;
	w = d/7;
	d = d%7;

	cout<<"\n number of years : "<<y;
	cout<<"\n number of weeks : "<<w;
	getch();
}