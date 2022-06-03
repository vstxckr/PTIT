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
    int B[10000]={};
    int dem=1;
    B[dem]=A[1];
    for ( int i=1 ; i<=n ; i++ )
    {
        bool check=true;
        for ( int j=1 ; j<=dem ; j++ )
        {
            if (A[i]==B[j])
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
    int C[10000]={};
    int demC=0;
    for ( int i=1 ; i<=dem ; i++ )
    {
        int demtrung=0;
        for ( int j=1 ; j<=n ; j++ )
        {
            if (B[i]==A[j])
            {
                demtrung++;
            }
        }
        if (demtrung>1)
        {
            demC++;
            C[demC]=B[i];
        }
    }
    printf("%d\n",demC);
    for ( int i=1 ; i<=demC ; i++ )
    {
        printf("%d ",C[i]);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}