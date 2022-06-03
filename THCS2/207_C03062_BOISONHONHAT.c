#include<stdio.h>
#include<math.h>

#define ll long long

ll gcd(ll a, ll b)
{
    ll mul = a*b;
    while (a*b)
    {
        a %= b;
        ll temp = a;
        a = b;
        b = temp;
    }
    return mul / (a+b);
}

void solve(int n, int m)
{
    ll res = n;
    for ( ll i = n ; i <= m ; i++ )
    {
        res = gcd(res,i);
    }
    printf("%lld\n",res);
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n, m;
        scanf("%d %d",&n, &m);
        solve(n,m);
    }
}