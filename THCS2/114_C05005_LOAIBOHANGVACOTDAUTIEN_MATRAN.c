#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void xuli(int m,int n,int test)
{
    int A[101][101]={};
    for ( int i=1 ; i<=n ; i++ )
    {
        for ( int j=1 ; j<=m ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Test %d:\n",test);
    for ( int i=1 ; i<=n ; i++ )
    {
        for ( int j=1 ; j<=m ; j++ )
        {
            if (j!=1 && i!=1)
                printf("%d ",A[i][j]);
        }
        if (i!=1)
        printf("\n");
    }
}


int main()
{
    int t;
    scanf("%d",&t);
    for ( int i=1 ; i<=t ; i++ )
    {
        int n;
        int m;
        scanf("%d %d",&n,&m);
        xuli(m,n,i);
    }
}