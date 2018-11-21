#include<stdio.h>
int HCF(int,int);
int LCM(int,int);
void main()
{
	int m,n,c,ans;
	printf("Enter any 2 numbers \n");
	scanf("%d %d",&m,&n);
	printf("Press 1 for LCM and press 2 for HCF \n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			ans=LCM(m,n);
			printf("LCM is: %d \n",ans);
			break;
		case 2:
			ans=HCF(m,n);
			printf("HCF is: %d \n",ans);
			break;
	}
}

int HCF(int m,int n)
{
 
	if(m==n)
		return n;
	else if(m<n)
		HCF(m,n-m);
	else
		HCF(m-n,n);
}
int LCM(int m,int n)
{

	if(m==n)
		return m;
	else if(m<n)
		LCM(m+m,n);
	else
		LCM(m,n+n);
}

