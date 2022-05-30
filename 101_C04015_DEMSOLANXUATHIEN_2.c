#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void xuli(int n,int test)
{
    int A[100]={0};

    for ( int i=1 ; i<=n ; i++ )    
    {
        scanf("%d",&A[i]);
    }

    int dem=1;
    int B[100]={0};
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
    int C[100]={0};
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
        
        C[i]=demB;
    }
    printf("Test %d:\n",test);
    for ( int i=1 ; i<=dem ; i++ )
    {
        printf("%d xuat hien %d lan\n",B[i],C[i]);
    }
}

int main()
{
    int t;
    int n;
    scanf("%d",&t);
    for ( int i=1 ; i<=t ; i++ )
    {
        scanf("%d",&n);
        xuli(n,i);
    }
}