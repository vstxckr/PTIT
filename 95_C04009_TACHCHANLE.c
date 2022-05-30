#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void xuli(int n)
{
    int A[1000]={0};
    for ( int i=1 ; i<=n ; i++ )    
    {
        scanf("%d",&A[i]);
    }
    for ( int i=1 ; i<=n ; i++ )
    {
        if ( (A[i]&1)==0 )
        {
            printf("%d ",A[i]);
        }
    }
    printf("\n");
    for ( int i=1 ; i<=n ; i++ )
    {
        if ( (A[i]&1) ==1 )
        {
            printf("%d ",A[i]);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}