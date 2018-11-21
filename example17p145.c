#include<stdio.h>
void convert(int,int); 
void main()
{
	int n,b,r;
	printf("Enter number to convert \n");
	scanf("%d",&n);
	printf("Enter base \n");
	scanf("%d",&b);

	switch(b)
	{
	case 2:
		b=2;
		break;
	case 8:
		b=8;
		break;
	case 16:
		b=16;
		break;
	default:
		printf("Invalid base \n");
	}
	convert(n,b);
	 printf("\n");

}


 void convert(int n , int b)
{
	int r;
	r=n%b;
	n=n/b;
	if (n>0)
	convert (n,b) ;
	if(r<10)
	printf("%d",r) ;
	else
	printf("%c",r-10+'A') ;
//	printf("\n");

}
