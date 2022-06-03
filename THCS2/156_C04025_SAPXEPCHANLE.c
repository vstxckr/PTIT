#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void sort(int *A, int n)
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

void solve(int *A, int n)
{
    int B[200] = {0}, C[200] = {0};
    int le = -1, chan = -1;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&A[i]);
        if ( A[i] & 1 ) C[++le] = A[i];
        if ( !(A[i] & 1) ) B[++chan] = A[i];
    }
    sort(B,chan+1);
    sort(C,le+1);
    for ( int i = 0 ; i <= chan ; i++ )
    {
        printf("%d ",B[i]);
    }
    for ( int i = 0 ; i <= le ; i++ )
    {
        printf("%d ",C[i]);
    }
}

int main()
{
    int n, A[200];
    scanf("%d",&n);
    solve(A,n);
}