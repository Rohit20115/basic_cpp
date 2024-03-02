// Write a program for modern periodic table using c programming language.

#include<stdio.h>
int main()
{
	int n;
	int m;
	int a;
	int EXITE;
	int exi;
	clrscr();

	printf("WELCOME TO PERIODIC TABLE. \n\n");
	printf("ENTER 1 TO KNOW ABOUT AN ELEMENT. \n\n");
	printf("ENTER 2 TO CLOSE THE PERIODIC TABLE. \n\n");
	printf("Enter\n");
	scanf("%d",&n);

	if(n==1)
	{
		printf(">press 3 to search the element by atomic number\n\n");
		printf("ENTER\n");
		scanf("%d",&m);

		if(m==3)
		{
			printf("Enter the atomic number of the element to be searched:");
			scanf("%d",&a);
			if(a==1)
			{
				printf("NAME:hydrogen\n");
				printf("symbol:H\n");
				printf("Atomic number:1\n");
				printf("Electronic configuration:1s^1\n");
				printf("Discovered by:henry covendish\n");
				printf("charge:+1\n");
			}
		}
	}
	else
	if(n==2)
	{
		printf("Do you want to exit ? (yes/no)\n");
		printf(">press 6 for yes\n");
		printf(">press 7 for no\n");
		printf("ENTER\n");
		scanf("%d",&EXITE);
	}
	if(EXITE==6)
	{
		printf("Are you sure you want to close the periodic table ?(Yes/or)\n");
		printf(">process 4 for Yes \n ");
		printf(">process 5 for No \n ");
		printf("ENTER \n");
		scanf("%d",&EXITE);
		if(exi==4)
		{
			printf("The periodic table has closed");
		}
		else
		if(exi==5)
		{
			printf("The peridic table has not closed and you can continue to learn more about elements\n\n");
			printf("Enter the atomic number of the element to be searched :\n\n");
			scanf("%d",&a);

			if(a==1)
			{
				printf("NAME: hydrogen\n");
				printf("symbol: H\n");
				printf("Atomic number: 1\n");
				printf("Electronic configuration: 1s^1\n");
				printf("Discovered by: henry covendish \n");
				printf("Charge: +1\n");
			}
		}
	}
	else
	if(EXITE==7)
	{
		printf("The periodic table has not closed and you can continue to learn more about elements\n\n");
		printf("Enter the atomic number of the element to be searched :\n\n");
		scanf("%d",&a);

		if(a==1);
		{
			printf("NAME: hydrogen\n");
			printf("symbol: H\n");
			printf("Atomic number: 1\n");
			printf("Electronic configuration: 1s^1\n");
			printf("Discovered by: henry covendish \n");
			printf("Charge: +1\n");

		}
	}
	return 0;
}






