// c++ program to print multiplication table of a given number.

#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n,table;
	clrscr();

	cout<<"Enter any positive number : ";
	cin>>n;

	cout<<"\n Multiplication table of a given number ["<<n<<"] :\n\n";
	for(i=1;i<=10;i++)
	{
		table = n*i;
		cout<<"\t"<<n<<" * "<<i<<" = "<<table<<"\n\n";
	}
	getch();
}