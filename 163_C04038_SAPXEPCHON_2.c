#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

void swap( int * a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void solve(int n)
{
    int A[1000] = {0};
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    if ( n == 1 )
    {
        printf("%d",A[0]);
        return ;
    }
    for ( int i = 0 ; i < n-1 ; i++ )
    {
        int max = A[i], vt = -1;
        for ( int j = i+1 ; j < n ; j++ )
        {
            if ( max > A[j] )
            {
                max = A[j];
                vt = j;
            }
        }
        if ( vt >=0 )
        {
            swap (&A[i],&A[vt]);
        }
        for ( int j = 0 ; j < n ; j++ )
        {
            printf("%d ",A[j]);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
}
