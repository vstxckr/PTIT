#include<stdio.h>
#define ll long long

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void solve(int n)
{
    int A[101][101]; 
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
        swap(&A[i][i],&A[i][n-i-1]);
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}


 
int main ()
{
    int n;
    scanf("%d",&n);
    solve(n);
}