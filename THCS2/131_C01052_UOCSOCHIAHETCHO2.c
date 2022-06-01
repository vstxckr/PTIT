#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void factor(int n)
{
    
    if ( n % 2 )
    {
        printf("0\n");
        return ;
    }

    int coso[20] = {0};
    int mu[20] = {0};

    int index = 0;
    coso[index] = 2;

    while ( n % 2 == 0)
    {
        mu[index]++;
        n /= 2;
    }
    mu[index];

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

    for ( int i = 1 ; i <= index ; i++ )
    {
        mu[0] *= (mu[i]+1);
    }

    printf("%d\n",mu[0]);
}

int main()
{
    int t;
    int n;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%d",&n);
        factor(n);
    }
}
