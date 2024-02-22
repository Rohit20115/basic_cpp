#include<iostream.h>
#include<conio.h>
void main()
{
	int i,x,n,sum = 0;
	float avg;
	clrscr();

	cout<<"How many number u want to enter : ";
	cin>>n;

	for(i=1;i<=n;++i)
	{
		cout<<"\n\n Enter number "<<i<<" : ";
		cin>>x;

		sum +=x;
	}

	avg = (float)sum/(float)n;
	cout<<"\n\n sum of "<<n<<" numbers : "<<sum;
	cout<<"\n\n Average of "<<n<<" number : "<<avg;
	cout<<"\n";
	getch();
}