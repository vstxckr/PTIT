#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

void solve(int n)
{
    ll x = 2e10,y = 2e10;
    for ( int i = 0 ; i < n ; i++ )
    {
        ll t1, t2;
        scanf("%lld %lld",&t1, &t2);
        x = (x > t1 ? t1 : x);
        y = (y > t2 ? t2 : y);
    }
    printf("%lld",x*y);
}
 
int main ()
{
    int n;
    scanf("%d",&n);
    solve(n);
}