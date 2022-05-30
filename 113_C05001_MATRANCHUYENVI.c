#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void xuli(int m,int n)
{
    int A[101][101]={};
    for ( int i=1 ; i<=n ; i++ )
    {
        for ( int j=1 ; j<=m ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
    }
    for ( int i=1 ; i<=m ; i++ )
    {
        for ( int j=1 ; j<=n ; j++ )
        {
            printf("%d ",A[j][i]);
        }
        printf("\n");
    }
}


int main()
{
    int n;
    int m;
    scanf("%d %d",&n,&m);
    xuli(m,n);
}