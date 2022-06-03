#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>






void xuli(int n)
{
    int A[100]={};
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
    }

    int B[100]={};
    int dem=1;
    B[dem]=A[1];
    for ( int i=2 ; i<=n ; i++ )
    {
        bool check=true;
        for ( int j=1 ; j<=dem ; j++ )
        {
            if (B[j]==A[i])
            {
                check=false;
                break;
            }
        }
        if (check==true)
        {
            dem++;
            B[dem]=A[i];
        }
    }

    
    for ( int i=1 ; i<=dem ; i++ )
    {
        printf("%d ",B[i]);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}