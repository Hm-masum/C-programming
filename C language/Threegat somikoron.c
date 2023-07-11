#include<stdio.h>
int main()
{
    double a,b,c;

    printf("Enter the value of a , b, c:");
    scanf("%lf%lf%lf",&a,&b,&c);

    double x=(-b-sqrt((b*b)-(4*a*c)))/2*a ;
    double y=(-b+sqrt((b*b)-(4*a*c)))/2*a ;
    printf("x=%lf\n",x);
    printf("y=%lf\n",y);

    return 0;
}
