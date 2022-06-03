#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool check(long long n)
{
    while (n!=0)
    {
        if ( ((n%10)&1)==1 )
        {
            return false;
        }
        n/=10;
    }
    return true;
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n);
        if (check(n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}