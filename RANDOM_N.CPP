#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	int i;
	int n;
	clrscr();

	cout<<"Generating random numbers below : \n\n";
	for(i=1;i<=10;i++)
	{
		n=rand()%100;
		cout<<" "<<n<<" ";
	}

	cout<<"\n";
	getch();
}