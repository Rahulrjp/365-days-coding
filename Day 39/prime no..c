#include<stdio.h>
void main()
{
	int n;
	printf("Enter a no. : ");
	scanf("%d",&n);
	int m=0;
	for(int i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			printf("%d is not Prime no.\n",n);
			m=1;
			break;
		}
	}
		if(m==0)
		{
			printf("%d is Prime no.\n",n);
			return 0;
		}
}
