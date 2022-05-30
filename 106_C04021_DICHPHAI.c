#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>



void xuli(int n)
{
    int A[100]={};
    int dem=0;
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    int k;
    scanf("%d",&k);
    for ( int i=n-k+1 ; i<=n ; i++ )
    {
        printf("%d ",A[i]);
    }
    for ( int i=1 ; i<=n-k ; i++ )
    {
        printf("%d ",A[i]);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}