#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int A[][2], int n)
{
    for ( int i = 0 ; i < n-1 ; i++ )
    {
        int max = A[i][0], vt = -1;
        for ( int j = i+1 ; j < n ; j++ )
        {
            if ( max > A[j][0] )
            {
                max = A[j][0];
                vt = j;
            }
        }
        if ( vt >= 0 )
        {
            swap (&A[i][0], &A[vt][0]);
            swap (&A[i][1], &A[vt][1]);
        }
    }
}

void solve(int n)
{
    int A[102][2];
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%d %d",&A[i][0],&A[i][1]);
    }
    sort(A,n);
    int curr = A[0][0]+A[0][1];
    for ( int i = 1 ; i < n ; i++ )
    {
        if ( curr > A[i][0] )
        {
            curr += A[i][1];
        }
        else 
        {
            curr = A[i][0] + A[i][1];
        }
    }
    printf("%d",curr);
}

int main()
{
    int n;
    scanf("%d",&n);
    solve(n);
}S