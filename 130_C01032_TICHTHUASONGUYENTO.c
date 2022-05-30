#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void factor(int n)
{
    int coso[20] = {0};
    bool odd = false;

    int index = 0;
    if ( n % 2 == 0 ) 
    {
        coso[index] = 2;
    }
    else
    {
        odd = true;
    }

    while ( n % 2 == 0)
    {
        n /= 2;
    }

    for ( int i = 3 ; i <= sqrt(n) ; i += 2 )
    {
        if (n % i == 0) 
        {
            if (odd != true) 
            {
                index++; 
            }
            else
            {
                coso[index] = i;
                odd = false;
            }
            coso[index] = i;
        }
        while ( n % i == 0)
        {
            n /= i;
        }
    }

    if ( n > 1 )
    {
        if (odd != true) 
        {
            index++; 
        }
        coso[index] = n;
        odd = false;
    }

    int s = 1;
    for ( int i = 0 ; i <= index ; i++ )
    {
        s *= coso[i];
    }

    printf("%d\n",s);
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
