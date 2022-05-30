#include<stdio.h>

void phai(int *x, int *y, int *count, int A[][101], int level, int n)
{
    while (*x < n-level-1 && *count != 1)
    {
        A[*y][++(*x)] = --(*count);
    }
}

void xuong(int *x, int *y, int *count, int A[][101], int level, int n)
{
    while (*y < n-level-1 && *count != 1)
    {
        A[++(*y)][*x] = --(*count);
    }
}

void trai(int *x, int *y, int *count, int A[][101], int level, int n)
{
    while (*x > level && *count != 1)
    {
        A[*y][--(*x)] = --(*count);
    }
}

void len(int *x, int *y, int *count, int A[][101], int level, int n)
{
    while (*y > level+1 && *count != 1)
    {
        A[--(*y)][*x] = --(*count);
    }
}

void xuat(int A[][101],int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

void solve(int n, int test)
{
    int level = 0, x = 0 , y = 0;
    int A[101][101] = {0};
    A[0][0] = n*n;
    int count = n*n;
    while (count != 1)
    {
        phai(&x,&y,&count,A,level,n);
        xuong(&x,&y,&count,A,level,n);
        trai(&x,&y,&count,A,level,n);
        len(&x,&y,&count,A,level,n);
        level++;
    }
    printf("Test %d:\n",test);
    xuat(A,n);
}

int main()
{
    int t;
    scanf("%d",&t);
    for ( int i = 1 ; i <= t ; i++ )
    {
        int n;
        scanf("%d",&n);
        solve(n,i);
    }
    return 0;
}
