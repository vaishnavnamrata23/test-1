#include<stdio.h>
void primefact(int);
void main()
{
	int n,i;
	printf("Enter any integer number to find prime factor: \n");
	scanf("%d",&n);
	primefact (n);
}

void primefact(int n)
{
	int i;
	printf("Prime factor is:\n");
	if(n!=1)
	{
		for(i=2;n!=1;i++)
		{	
			while(n%i==0)
			{
				printf("%d \n",i);
				n=n/i;
			}	
		
		}
	
	}
	else
	{
		printf("1 \n");
	}
}

