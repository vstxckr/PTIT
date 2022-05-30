#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void swap(long long *a, long long *b)
{
    long long temp=*a;
    *a=*b;
    *b=temp;
}
void lcm_gcd(long long a,long long b)
{
    long long hold=a*b;
    while (a*b!=0)
    {
        a%=b;
        swap(&a,&b);
    }
    printf("%lld %lld\n",hold/(a+b),a+b);
}

int main()
{
    int t;
    scanf("%d",&t);
    for ( int i=1 ; i<=t ; i++ )
    {
        long long a,b;
        scanf("%lld %lld",&a,&b);
        lcm_gcd(a,b);
    }
}