#include<stdio.h>
#include<math.h>

#define ll long long

int snt(ll n)
{
    if ( n < 2 ) return 0;
    for ( int i = 2 ; i <= sqrt(n) ; i++ )
    {
        if ( n % i == 0 )
        {
            return 0;
        }
    }
    return 1;
}

void solve(ll a, ll b)
{
    int count = 0;
    int stop = sqrt(b), start = sqrt(a);
    if (pow(start,2) != a) start++;
    for ( int i = start ; i <= stop ; i++ ) 
    {
        if ( snt(i) )
        {
            count++;
        }
    }
    printf("%d\n",count);
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        ll a,b;
        scanf("%lld %lld",&a,&b);
        solve(a,b);
    }
}