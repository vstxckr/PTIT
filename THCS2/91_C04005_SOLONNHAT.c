#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void xuli(int n)
{
    int max=-1;
    int A[10000]={0};
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
        if (A[i]>max) max=A[i];
    }
    printf("%d\n",max);
    for ( int i=1 ; i<=n ; i++ )
    {
        if (A[i]==max)
        {
            printf("%d ",i-1);
        }
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        xuli(n);
    }
}