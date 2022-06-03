#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


bool A[100000];

void sangnt(int n)
{
    A[0] = true;
    A[1] = true;
    for ( int i = 2 ; i <= sqrt(n) ; i++ )
    {
        int j = i*i;
        while ( j <= n )
        {
            A[j] = true;
            j += i;
        }
    }
}

int tong(int n)
{
    int s = 0;
    while (n)
    {
        s += n % 10;
        n /= 10;
    }
    return s;
}

bool solve(int n)
{
    int dem = 0;
    for ( int i = 2 ; i <= n ; i++ )
    {
        if ( A[i] == false && tong(i) % 5 == 0 ) 
        {
            printf("%d ",i);
            dem++;
        }
    }
    printf("\n%d",dem);
}
int main()
{
    int n;
    scanf("%d",&n);
    sangnt(n);
    solve(n);
}
