#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int A[14][14];
int n;

void in_man()
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        for ( int j = 1 ; j <= i ; j++ )
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

void solve(int x)
{
    if ( x == n+1 ) return ;
    for ( int i = 1 ; i <= x ; i++ )
    {
        A[x][i] = A[x-1][i] + A[x-1][i-1];
    } 
    solve(x+1);
}


int main()
{
    A[1][1] = 1;
    scanf("%d",&n);
    solve(2);
    in_man();
}