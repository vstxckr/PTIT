#include <stdio.h>
int main()
{
    long long a,b;
    scanf("%lld",&a);
    scanf("%lld",&b);
    printf("%lld\n%lld\n%lld\n%lld\n%lld\n%.2lf",a+b,a-b,a*b,a/b,a%b,1.0*a/b);
}