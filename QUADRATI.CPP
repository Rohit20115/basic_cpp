// c++ program to find the roots of quadratic equation using if else.
#include<iostream.h>
#include<conio.h>
void main()
{
	float a,b,c,x1,x2,determinant,realpart,imaginarypart;
	clrscr();

	cout<<"Enter the cofficiant a : ";
	cin>>a;
	cout<<"Enter the cofficient b : ";
	cin>>b;
	cout<<"Enter the cofficient c : ";
	cin>>c;

	determinant = b*b-4*a*c;

	if(determinant > 0)
	{
		x1 = (-b+sqrt(determinant))/(2*a);
		x2 = (-b-sqrt(determinant))/(2*a);
		cout<<"\n Roots are real and diffrent .";
		cout<<"\n x1 = "<<x1<<;
		cout<<"\n x2 = "<<x2<<;
	}
	else
	if(determinant == 0)
	{
		cout<<"\n Root are real and same.";
		x1 = (-b+sqrt(determinant))/(2*a);
		cout<<"\n x1 = x2 = "<<x1<<;
	}
	else
	{
		realpart = -b/(2*a);
		imaginarypart = sqrt(-determinant)/(2*a);
		cout<<"\n Root are complex and different.<<";
		cout<<"\n x1 = "<<realpart<<"+"<<imaginarypart<<"i";
		cout<<"\n x2 = "<<realpart<<"-"<<imaginarypart<<"i";
	}
	getch();
}


