#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for ( int i=1 ; i<=t ; i++ )
    {
        long long n;
        scanf("%lld",&n);
        printf("%lld\n",n*n);
    }
}