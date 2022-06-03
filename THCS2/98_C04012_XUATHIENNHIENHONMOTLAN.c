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

    int dem=1;
    int B[1000]={0};
    B[dem]=A[1];
    int demB=0;

    for ( int i=1 ; i<=n ; i++ )
    {
        int check=true;
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
        int demB=0;
        for ( int j=1 ; j<=n ; j++ )
        {
            if (A[j]==B[i])
            {
                demB++;
            }
        }
        if (demB>=2)
        {
            printf("%d ",B[i]);
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}