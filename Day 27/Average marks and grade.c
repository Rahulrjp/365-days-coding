#include<stdio.h>
int main()
{
    int phy ,chem ,maths ,eng ,cp ,total;
    float avg , pct ;
    printf("enter the marks=");
    scanf("%d%d%d%d%d",&phy, &chem ,&maths, &eng, &cp);
    total=phy+chem+maths+eng+cp;
    printf("total marks =%d\n",total);
    avg=total/5;
    printf("Average marks=%f\n",avg);

    if(avg<40)
        {
                printf("Grade = Fail");
        }
    if(avg>=40 && avg<60)
                {
                    printf("Grade = C");
                }
     if(avg>=60 && avg<80)
                {
                    printf("Grade = B");
                }
    if(avg>=80)
        {
            printf("Grade = A");
        }
    return 0;
}
