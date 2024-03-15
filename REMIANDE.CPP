//Find the quotient and remainder

#include<iostream.h>
#include<conio.h>
void main()
{
	int dividend,divisor,quotient,remainder;

	cout<<"Enter the divident : ";
	cin>>dividend;

	cout<<" \n Enter the divisor : ";
	cin>>divisor;

	quotient = dividend/divisor;
	remainder = dividend%divisor;

	cout<<"\n Quotient = "<<quotient<<endl;
	cout<<"\n Remainder = "<<remainder<<endl;

	getch();
}
