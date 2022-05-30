#include<stdio.h>
#include<math.h>

#define ll long long

ll gcd(ll a, ll b)
{
    ll mul = a*b;
    while(a*b)
    {
        a %= b;
        ll temp = a;
        a = b;
        b = temp;
    }
    return mul/(a+b);
}


void solve(int n)
{
    if (n == 0) 
    {
        printf("0\n");
        return ;
    }
    ll res = 1;
    for ( ll i = 1 ; i <= n ; i++ ) 
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
        int n;
        scanf("%d",&n);
        solve(n);
    }
}