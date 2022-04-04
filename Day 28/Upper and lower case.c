#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charector : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    {
        printf("'%c' is Upper case charector",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("'%c' is Lower case charector",ch);
    }
    else
    {
        printf("'%c' is not a charector",ch);
    }
}
