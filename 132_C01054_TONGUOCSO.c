#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

long long factor(int n)
{
    int coso[20] = {0};
    int mu[20] = {0};

    int index = 0;
    coso[index] = 2;

    while ( n % 2 == 0)
    {
        mu[index]++;
        n /= 2;
    }

    for ( int i = 3 ; i <= sqrt(n) ; i+=2 )
    {
        if ( !(n % i) )
        {
            index++;
            coso[index] = i;
        }
        while ( !(n % i) )
        {
            mu[index]++;
            n /= i;
        }
    }

    if ( n > 1 )
    {
        index++;
        coso[index] = n;
        mu[index] = 1;
    }

    long long s = 0;
    for ( int i = 0 ; i <= index ; i++ )
    {
        s += (long long)mu[i]*(long long)coso[i];
    }
    return s;
}

int main()
{
    int t;
    int n;
    long long s = 0;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%d",&n);
        s += factor(n);
    }

    printf("%lld",s);
}
