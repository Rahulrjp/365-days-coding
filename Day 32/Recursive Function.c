#include<stdio.h>
int fact(int);
int main()
{
	int n ,res;
	printf("Enter a no :");
	scanf("%d",&n);
	res=fact(n);
	printf("Factorial is %d",res);
}
int fact(int x)
{
	int f;
	if(x==1)
		return 1;
	else
		f=x*fact(x-1);
	return f;
}
