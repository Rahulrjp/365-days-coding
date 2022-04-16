#include<stdio.h>
int main()
{
    int sub[5],total=0;
    float avg;

    for(int i=0;i<=4;i++)
    {
        printf("Enter the marks =");
        scanf("%d",&sub[i]);
         total+=sub[i];
    }
        printf("total marks=%d\n",total);
    avg=total/5;
    printf("Average marks=%f\n",avg);
    if(avg>=80)
        {
            printf("Grade = A");
        }
    if(avg>=60 && avg<80)
        {
            printf("Grade = B");
        }
    if (avg>=40 && avg<60)
        {
            printf("Grade = C");
        }
    if(avg<40)
        {
            printf("Grade = fail");
        }
}
