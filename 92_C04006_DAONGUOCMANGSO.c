#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void xuli(int n)
{
    int A[10000]={0};
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    for ( int i=n ; i>=1 ; i-- )
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}