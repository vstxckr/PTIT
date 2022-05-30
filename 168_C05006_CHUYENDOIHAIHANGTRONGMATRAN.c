#include<stdio.h>
#define ll long long

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void solve(int m,int n)
{
    int A[101][101];

    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
    }

    int r1, r2;
    scanf("%d %d",&r1, &r2);

    for ( int i = 0 ; i < n ; i++ )
    {
        swap(&A[r1-1][i],&A[r2-1][i]);
    }
    
    for ( int i = 0 ; i < m ; i++ )
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
    int m, n;
    scanf("%d %d",&m,&n);
    solve(m,n);
}