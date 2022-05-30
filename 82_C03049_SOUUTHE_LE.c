#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool le(long long n)
{
    if ((n&1)==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void souuthechan(long long n)
{
    if (le(n)==false)
    {
        printf("NO\n");
        return ;
    }
    int sole=0;
    int sochan=0;
    while (n!=0)
    {
        if (le(n%10))
            sole++;
        else
            sochan++;
        n/=10;
    }
    if (sochan<sole)
        printf("YES\n");
    else
        printf("NO\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--) 
    {
        long long n;
        scanf("%lld",&n);
        souuthechan(n);
    }
}