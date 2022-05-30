#include<stdio.h>
#define ll long long

#define function int (*func)(int (*A)[101],int n,int i)
#define max(a,b) a > b ? a : b

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int row_sum(int A[][101], int n, int row)
{
    int sum = 0;    
    for ( int i = 0 ; i < n ; i++ )
    {
        sum += A[row][i];
    }
    return sum;
}

int column_sum( int A[][101], int m, int column)
{
    int sum = 0;
    for ( int i = 0 ; i < m ; i++ )
    {
        sum += A[i][column];
    }
    return sum;
}

void max_rc(int m,int n,int A[][101], int *max, int *vt, function)
{
    for ( int i = 0 ; i < m ; i++ )
    {
        int temp = func(A,n,i);
        if ( temp > *max )
        {
            *max = temp;
            *vt = i;
        }
    }
}

void solve(int m, int n, int test)
{
    int A[101][101];
    // nhap mang
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
    }


    int max_row = -2e9;         // bien luu max cua hang
    int max_column = -2e9;      // bien luu max cua cot
    int vt_column, vt_row;      // bien luu vi tri

    // tim max cua hang truoc
    max_rc(m, n, A, &max_row, &vt_row, row_sum);
    // sau do day phan tu cua hang do xuong hang cuoi cung cua mang
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = vt_row ; j <= m-1 ; j++ )
        {
            swap(&A[j][i],&A[j+1][i]);
        }
    }

    // tim max cua cot
    max_rc(n, m-1, A, &max_column, &vt_column, column_sum);
    // day cot do xuong cot cuoi cung cua mang
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = vt_column ; j <= n-1 ; j++ )
        {
            swap(&A[i][j],&A[i][j+1]);
        }
    }
    printf("Test %d:\n",test);
    for ( int i = 0 ; i < m-1 ; i++ )
    {
        for ( int j = 0 ; j < n-1 ; j++ )
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    
}


 
int main ()
{
    int t;
    scanf("%d",&t);
    for ( int i = 1 ; i <= t ; i++ )
    {
        int m, n;
        scanf("%d %d",&m,&n);
        solve(m,n,i);
    }
}