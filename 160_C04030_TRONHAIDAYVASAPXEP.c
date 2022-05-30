#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void sort(int *A, int n, int sl)
{
    if ( sl == 1 )
    {
        for ( int i = n-2 ; i >= 0 ; i-- )
        {
            for ( int j = 0 ; j <= i ; j++ )
            {
                if ( A[j] > A[j+1] )
                {
                    int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                }
            }
        }
    }
    else
    {
        for ( int i = 1 ; i <= n-1 ; i++ )
        {
            for ( int j = n-1 ; j >= i ; j-- )
            {
                if (A[j] > A[j-1])
                {
                    int temp = A[j];
                    A[j] = A[j-1];
                    A[j-1] = temp;
                }
            }
        }
    }
}

void solve(int *A, int *B, int test)
{
    int n;
    scanf("%d",&n);
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&B[i]);
    }
    sort(A,n,1);
    sort(B,n,-1);
    int le = 0 , chan = 0;
    printf("Test %d:\n",test);
    for ( int i = 0 ; i < n*2 ; i++ )
    {
        if ( i & 1 )
            printf("%d ",B[le++]);
        else 
            printf("%d ",A[chan++]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    for ( int i = 1 ; i <= t ; i++ )
    {
        int A[200], B[200];
        solve(A,B,i);
    }
}
