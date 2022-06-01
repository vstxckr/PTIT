#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long


void mul(int A[][101], int B[][101], int C[][101], int m, int n, int q)
{
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < q ; j++ )
        {
            for ( int k = 0 ; k < n ; k++ )
            {
                C[i][j] += A[i][k]*B[k][j]; 
            }
        }
    }
}

void solve(int n, int test)
{
    int A[101][101] = {0}; 
    int B[101][101] = {0};
    int C[101][101] = {0};

    for ( int i = 0 ; i < n ; i++ )
    {
        int count = 1;
        for ( int j = 0 ; j <= i ; j++ )
        {
            A[i][j] = count++;
        }
    }
    
    
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            B[j][i] = A[i][j];
        }
    }


    mul(A, B, C, n , n, n);

    printf("Test %d:\n",test);

    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}


 
int main ()
{
    int t;
    scanf("%d",&t);
    for ( int i = 1 ; i <= t ; i++ )
    {
        int n;
        scanf("%d",&n);
        solve(n,i);
    }
}