#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void sort(int *A, int n, int step)
{
    for ( int i = 0 ; i < n-1 ; i++ )
    {
        for ( int j = i+1 ; j <= n-1 ; j++ )
        {
            if ( A[i] > A[j] )
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
        printf("Buoc %d: ",step);
        for ( int i = 0 ; i < n ; i++ )
        {
            printf("%d ",A[i]);
        }
        printf("\n");
        step++;
    }
}

void solve(int *A, int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    sort(A,n,1);
}

int main()
{
    int n, A[200];
    scanf("%d",&n);
    solve(A,n);
}