#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool stn(int n)
{
    int A[10] = {0};
    int i = 0;
    while (n)
    {
        A[i] = n % 10;
        if ( A[i] == 9 ) return false;
        n /= 10;
        i++;
    }
    for ( int j = 0 ; j < i-1 ; j++ )
    {
        if ( A[j] != A[i-1-j])
        {
            return false;
        }
    }
    return true;
}

void solve(int n)
{
    int count = 0;
    for ( int i = 2 ; i <= n ; i++ )
    {
        if (stn(i)) 
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\n%d",count);
}

int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
}