#include<stdio.h>

void phai(int *x, int *y, int *count, int A[][101], int level, int n)
{
    while (*x < n-level-1 && *count != n*n)
    {
        A[*y][++(*x)] = ++(*count);
    }
}

void xuong(int *x, int *y, int *count, int A[][101], int level, int n)
{
    while (*y < n-level-1 && *count != n*n)
    {
        A[++(*y)][*x] = ++(*count);
    }
}

void trai(int *x, int *y, int *count, int A[][101], int level, int n)
{
    while (*x > level && *count != n*n)
    {
        A[*y][--(*x)] = ++(*count);
    }
}

void len(int *x, int *y, int *count, int A[][101], int level, int n)
{
    while (*y > level+1 && *count != n*n)
    {
        A[--(*y)][*x] = ++(*count);
    }
}

int main()
{
    int level = 0, x = 0 , y = 0, n;
    scanf("%d",&n);
    int A[101][101] = {0};
    A[0][0] = 1;
    int count = 1;
    while (count != n*n)
    {
        phai(&x,&y,&count,A,level,n);
        xuong(&x,&y,&count,A,level,n);
        trai(&x,&y,&count,A,level,n);
        len(&x,&y,&count,A,level,n);
        level++;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
