#include <stdio.h>
#include <string.h>
#include <math.h>

void factor(int n)
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

    for ( int i = 3 ; i <= sqrt(n) ; i += 2 )
    {
        if (n % i == 0) 
        {
            index++;
            coso[index] = i;
        }
        while ( n % i == 0)
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
    
    for ( int i = 0 ; i < index ; i++ )
    {
        for ( int j = 1 ; j <= mu[i] ; j++ )
        {
            printf("%dx",coso[i]);
        }
    }
    for ( int i = 1 ; i < mu[index] ; i++ )
    {
        printf("%dx",coso[index]);
    }
    printf("%d",coso[index]);
}

int main()
{
    int n;
    scanf("%d",&n);
    factor(n);
}
