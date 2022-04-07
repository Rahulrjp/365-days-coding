#include<stdio.h>
int main()
{
	int n,m=1;
	printf("Enter the no. :");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		m=m*i;
	}
	printf("Multiplication of n nos : %d",m);
}
