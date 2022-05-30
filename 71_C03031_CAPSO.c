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

long long gcd(long long a, long long b)
{
    while(a*b!=0)
    {
        a%=b;
        swap(&a,&b);
    }
    return a+b;
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        if (gcd(a,b)==gcd(c,d))
        {
            printf("YES\n");
        } 
        else
        {
            printf("NO\n");
        }
    }
}