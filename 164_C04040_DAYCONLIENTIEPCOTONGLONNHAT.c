#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

long long max( long long a, long long b)
{
    if ( a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

void solve(int n)
{
    int A[100001] = {0};
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    long long sum = 0;
    long long best = -2e9;
    for ( int i = 0 ; i < n ; i++ )
    {
        sum = max (A[i], sum + A[i]);
        best = max (best, sum);
    }
    printf("%lld\n",best);
}

int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        solve(n);
    }
}