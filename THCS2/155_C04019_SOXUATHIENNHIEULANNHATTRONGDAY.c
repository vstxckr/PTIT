#include <stdio.h>
#include <stdbool.h>

void solve(int *A, int n)
{
    int B[200] = {0};
    int C[200] = {0};
    int dem = 0;
    B[dem] = A[0];
    dem++;
    for ( int i = 0 ; i < n ; i++ )
    {
        bool lap = false;
        for ( int j = 0 ; j <dem ; j++ )
        {
            if ( A[i] == B[j] )
            {
                lap = true;
                break;
            }
        }
        if ( lap == false )
        {
            B[dem] = A[i];
            dem++;
        }
    }
    for ( int i = 0 ; i < dem ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( B[i] == A[j] )
            {
                C[i]++;
            }
        }
    }
    int max = -1e9;
    for ( int i = 0 ; i < dem ; i++ )
    {
        if ( C[i] >= max ) max = C[i];
    }
    for ( int i = 0 ; i < dem ; i++ )
    {
        if ( C[i] == max ) printf("%d ",B[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,A[200];
        scanf("%d",&n);
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf("%d",&A[i]);
        }
        solve(A,n);
    }
}
