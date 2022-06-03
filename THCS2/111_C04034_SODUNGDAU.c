#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void xuli(int n)
{
    int A[10000]={};
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    int dem=0;
    int B[10000]={};
    for ( int i=1 ; i<=n ; i++ )
    {
        bool check=true;
        for ( int j=i+1 ; j<=n ; j++ )
        {
            if (A[i]<=A[j])
            {
                check=false;
                break;
            }
        }
        if (check==true)
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
    while (t--)
    {
        int n;
        scanf("%d",&n);
        xuli(n);
    }
}