#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool ktrale(long long n)
{
    if (n&1==1)
    {
        return true;
    }
    return false;
}

bool tongle(long long n)
{
    long long s=0;
    while (n!=0)
    {
        if (ktrale(n%10)==false)
            return false;
        s+=n%10;
        n/=10;
    }
    if (ktrale(s)==true)
        return true;
    else
        return false;
}

bool thuannghich(long long n)
{
    long long hold=n;
    long long temp=0;
    while (n!=0)
    {
        temp=temp*10 + n%10;
        n/=10;
    }
    if (temp==hold)
        return true;
    else
        return false;
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n);
        if (thuannghich(n) && tongle(n))
            printf("YES\n");
        else
            printf("NO\n");
    }
}