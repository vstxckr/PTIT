#include <stdio.h>
#include <string.h>


void matrix_mul( int res[][101], int A[][101], int B[][101], int m, int n, int p)
{
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < p ; j++)
        {
            for ( int k = 0 ; k < n ; k++ )
            {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}


int main()
{
    int m,n,p,q;
    int res[101][101], A[101][101], B[101][101], C[101][101];
    memset(res,0,sizeof(res));

    //nhap
    scanf("%d %d %d %d", &m, &n, &p, &q);
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < p ; j++ )
        {
            scanf("%d",&B[i][j]);
        }
    }
    for ( int i = 0 ; i < p ; i++ )
    {
        for ( int j = 0 ; j < q ; j++ )
        {
            scanf("%d",&C[i][j]);
        }
    }

    matrix_mul(res,A,B,m,n,p);
    memset(A,0,sizeof(A));
    matrix_mul(A,res,C,m,p,q);
    
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < q ; j++ )
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
