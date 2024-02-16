//c++ program to display ASCII value of a character.

#include<iostream.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();

	cout<<"Enter any character : ";
	cin>>c;

	cout<<"\n the ASCII value of character["<<c<<"] is :"<<int(c)<<"\n";

	getch();
}