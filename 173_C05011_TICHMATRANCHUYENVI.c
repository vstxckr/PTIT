#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


void solve(int m, int n, int (*A)[100],int test)
{
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
    }
    int B[100][100];
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            B[j][i] = A[i][j];
        }
    }
    int C[100][100] = {{0}};
    int q = m;
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < q ; j++ )
        {
            for ( int k = 0 ; k < n ; k++ )
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("Test %d:\n",test);
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < m ; j++ )
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    for ( int i = 1 ; i <= t ; i++ )
    {
        int A[100][100], m, n;
        scanf("%d %d",&m,&n);
        solve(m,n,A,i);
    }
}