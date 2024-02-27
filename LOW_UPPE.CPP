//c++ program to check character is uppercase,lowercase,digit or special.

#include<iostream.h>
#include<conio.h>
void main()
{
	char ch;
	clrscr();

	cout<<"Enter any character to check :";
	cin>>ch;

	if(ch>=65&&ch<=90)
	{
		cout<<"\n the entered character ["<<ch<<"] is an upper case character\n";
	}
	else
	if(ch>=48&&ch<=57)
	{
		cout<<"\n the entered character ["<<ch<<"] is a digit.\n";
	}
	else
	if(ch>=97&&ch<=122)
	{
		cout<<"\n the entered character ["<<ch<<"] is a lower case character.\n";
	}
	else
	{
		cout<<"\n the entered character ["<<ch<<"] is a special character.\n";
	}
	getch();
}
