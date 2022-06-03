#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

int B[10000];

void sangnt()
{
    B[1]=1;
    for ( int i=2 ; i<=sqrt(1000) ; i++ )
    {
        int j=i*i;
        while (j<=1000)
        {
            B[j]=1;
            j+=i;
        }
    }
}

void xuli(int n)
{
    int A[100000]={0};
    for ( int i=1 ; i<=n ; i++ ) 
    {
        scanf("%d",&A[i]);
    }
    for ( int i=1 ; i<=n ; i++ )
    {
        if ((B[A[i]])==0)
        {
            printf("%d ",A[i]);
        }
    }
    printf("\n");
}


int main()
{
    int t;
    scanf("%d",&t);
    sangnt();
    while (t--)
    {
        int n;
        scanf("%d",&n);
        xuli(n);
    }
}