#include<stdio.h>
int checkforprime(int );
int i;
int main()
{
	int n,check;
	printf("enter the number:");
	scanf("%d",&n);
	i=n/2;
	check = checkforprime(n);
	if (check==1)
	
		printf(" %d is a prime number",n);
	
	else
	
		printf("%d is not a prime number",n);
	
	return 0;
}
int checkforprime(int n)
{
	if (n==1)
	{
		printf("its neither prime nor composite");
	}
	if(i==1)
{
	
		return 1;
	}
	else if(n %i==0)
	{
	
		return 0;
	}
		else
		{
		
		i=i-1;
		checkforprime(n);
	}
	}
