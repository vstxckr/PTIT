#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double delta = b*b-4*a*c;
    if ((int)delta<0)
    {
        printf("NO");
        return 0;
    }
    if ((int)delta==0)
    {
        printf("%.2lf",(double)(-b-sqrt(delta))/(2*a));
        return 0;
    }
    printf("%.2lf %.2lf",(double)(-b+sqrt(delta))/(2*a),(double)(-b-sqrt(delta))/(2*a));
}