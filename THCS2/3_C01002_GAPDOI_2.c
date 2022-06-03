#include<stdio.h>
int main()
{
    long long n;
    int t;
    scanf("%d",&t);
    for ( int i=1 ; i<=t ; i++ )
    {
        scanf("%d",&n);
        printf("%d\n",n*2);
    }
}