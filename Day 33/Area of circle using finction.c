#include <stdio.h>
double area(double );
double peri(double );
int main()
{
    double r;
    printf("\nEnter Radius : ");
    scanf("%lf", &r);
    printf("\nArea is : %.2f", area(r),"cm");
    printf("\nPerimeter is : %.2f", peri(r),"cm");
    return 0;
}
double area(double r)
{
    return (3.14 * r * r);
}
double peri(double r)
{
    return (2 * 3.14 * r);
}
