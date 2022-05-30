#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void xuli(int n, int m)
{
    int A[10000]={0};
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    int B[10000]={0};
    for ( int i=1 ; i<=m ; i++ )
    {
        scanf("%d",&B[i]);
    }
    int p;
    scanf("%d",&p);
    if (p==0)
    {
        for ( int j=1 ; j<=m ; j++ )
        {
            printf("%d ",B[j]);
        }
    }
    for ( int i=1 ; i<=n ; i++ )
    {
        if (i!=p)
        {
            printf("%d ",A[i]);
        }
        else
        {
            printf("%d ",A[i]);
            for ( int j=1 ; j<=m ; j++ )
            {
                printf("%d ",B[j]);
            }
        }
    }
    printf("\n");
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    xuli(n,m);
}