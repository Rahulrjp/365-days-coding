#include<stdio.h>
int main()
{
    int n[100],i,min,max=0,ec=0;
    printf("No. of array : ");
    scanf("%d",&i);
    for(int j=0;j<i;j++)
        {
            printf("Enter numbers :");
            scanf("%d",&n[j]);
            if(n[j]>max)
            {
                max=n[j];
            }
            else
            {
                min=n[j];
            }
            if(n[j]%2==0)
            {
                ec++;
            }
        for(int k=1;k<=n[j];k++)
        {
            if((n[j]/k)==1 && (n[j]/k)==n[j])
            {
                printf("prime number    :    %d",n[j]);
            }
        }
        }
            printf("Maximum no. : %d\n",max);
            printf("Minimum no. : %d\n",min);
            printf("No. of Even numbers : %d\n",ec);
}
