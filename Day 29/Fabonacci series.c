#include<stdio.h>
int main()
{
	int a=1,b=1,c=a+b,n=10;
	printf("Febonacci series :");
	printf("%d,%d,%d",a,b,c);
	for(int i=1;i<n-1;i++)
	{
		a=b;
		b=c;
		c=a+b;
		printf(",%d",c);
	}
	return 0;
}
