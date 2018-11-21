#include<stdio.h>
void  main()
{
  int n1,n2,x,y,sum=0;
  printf("Enter two integers:\n");
  scanf("%d %d",&n1 ,&n2);
 
 while(n1>=1)
	{
		if(n1%2!=0)
		 sum=sum+n2;
		x=n1/2;
		n1=x;
		y=n2*2;
		n2=y;

	}
  printf("sum is: %d \n",sum);
}
