// c++ program to find the number of digits in a number.

#include<iostream.h>
#include<conio.h>
void main()
{
	int n,no,a=0;
	clrscr();

	cout<<"Enter any positive integer number : ";
	cin>>n;

	no = n;

	while(no>0)
	{
		no = no/10;
		a++;
	}
	cout<<"\n Number of digits in a number ["<<n<<"] is : "<<a<<"\n";
	getch();
}