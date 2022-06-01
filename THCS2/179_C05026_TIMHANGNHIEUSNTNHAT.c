#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool snt(int n)
{
    if ( n < 2 ) return false;
    for ( int i = 2 ; i <= sqrt(n) ; i++ )
    {
        if ( n % i == 0 )
        {
            return false;
        }
    }
    return true;
}


void solve(int n)
{
    int A[50][50] = {0};
    bool C[50][50] = {false};
    int B[50] = {0};

    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
    }
    int max = 0; 
    for ( int i = 0 ; i < n ; i++ )
    {
        int count = 0;
        for ( int j = 0 ; j < n ; j++ )
        {
            if (snt(A[i][j])) 
            {
                count++;
                C[i][j] = true;
            }
        }
        B[i] = count; 
        max = (count > max ? count : max);
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( B[i] == max )
        {
            printf("%d\n",i+1);
            for ( int j = 0 ; j < n ; j++ )
            {
                if (C[i][j]) printf("%d ",A[i][j]);
            }
            break;
        }
    }
}


 
int main ()
{
    int n;
    scanf("%d",&n);
    solve(n);
}