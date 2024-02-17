#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int p,r,t;
	float ci;
	clrscr();

	cout<<"Enter the amount : ";
	cin>>p;
	cout<<"Enter the rate : ";
	cin>>r;
	cout<<"enter the time : ";
	cin>>t;

	ci = p*pow(1+r/100,t);

	cout<<"\n compound interest = "<<ci;
	getch();
}