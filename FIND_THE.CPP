#include<iostream.h>
#include<conio.h>
void main()
{
	float n;
	clrscr();

	cout<<"Enter the total percentages :";
	cin>>n;
	if(n>33)
	cout<<"\n you are a pass";
	else
	cout<<"\n you are a fail please try again";
	getch();
}
