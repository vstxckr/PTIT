#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>


void solve(int test)
{
    int m, n, A[101][101] = {0};
    scanf("%d %d",&m, &n);
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
    }
    for ( int i = 0 ; i < m ; i++ ) 
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            for ( int k = i ; k < m ; k++ )
            {
                for ( int l = j ; l < n ; l++ )
                {
                    if (A[i][j] > A[k][l])
                    {
                        int temp = A[i][j];
                        A[i][j] = A[k][l];
                        A[k][l] = temp;
                    }
                }
            }
        }
    }
    printf("Test %d:\n",test);
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    for ( int i = 1 ; i <= t; i++ )
    {
        solve(i);
    }
}