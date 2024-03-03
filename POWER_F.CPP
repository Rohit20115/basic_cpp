// c++ program to raise any number x to power n.

#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x,n,result;
	clrscr();

	cout<<"Enter value of x : ";
	cin>>x;
	cout<<"Enter value of n : ";
	cin>>n;

	result = pow(x,n);

	cout<<"\n the power of number ["<<x<<"^"<<n<<"] = "<<result<<"\n";
	getch();
}
