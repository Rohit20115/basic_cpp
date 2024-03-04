#include<iostream.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();

	cout<<"Enter any positive number : ";
	cin>>n;

	if(n==1)
	{
		cout<<"\n smallest prime number is : 2";
	}
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<"\n the entered number ["<<n<<"] is not a prime number.\n";
			break;
		}
	}
	if(n==i)
	{
		cout<<"\n the entered number ["<<n<<"] is prime number.\n";
	}
	getch();
}