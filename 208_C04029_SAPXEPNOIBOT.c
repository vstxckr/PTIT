#include<stdio.h>
#include<math.h>

#define ll long long

void sort(int n, int *A)
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
        int end_print = 1;
        for ( int j = 0 ; j < n-1 ; j++ )
        {
            if ( A[j] > A[j+1] )
            {
                end_print = 0;
                break;
            }
        }
        if ( end_print )
        {
            printf("Buoc %d: ",n-i-1);
            for ( int j = 0 ; j < n ; j++ )
            {
                printf("%d ",A[j]);
            }
            break;
        }
        else
        {
            printf("Buoc %d: ",n-i-1);
            for ( int j = 0 ; j < n ; j++ )
            {
                printf("%d ",A[j]);
            }
            printf("\n");
        }
    }
}

void solve(int n, int *A)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    sort(n,A);
}

int main()
{
    int n, A[1000];
    scanf("%d",&n);
    solve(n,A);
}