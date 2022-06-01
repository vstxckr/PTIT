#include<stdio.h>
#define ll long long

void fib(ll *A, int n)
{
    A[0] = 0;
    A[1] = 1;
    A[2] = 1;
    for ( int i = 3 ; i <= n ; i++ )
    {
        A[i] = A[i-1] + A[i-2];
    }
}

void phai(int *n, int *x, int *y, ll A[][101], ll B[], int bound)
{
    while (A[*y][*x+1] == 0 && *x+1 < bound)
    {
        ++*x;
        ++*n;
        A[*y][*x] = B[*n];
    }
}

void xuong(int *n, int *x, int *y, ll A[][101], ll B[], int bound)
{
    while (A[*y+1][*x] == 0 && *y+1 < bound)
    {
        ++*y;
        ++*n;
        A[*y][*x] = B[*n];
    }
}

void trai(int *n, int *x, int *y, ll A[][101], ll B[], int bound)
{
    while (A[*y][*x-1] == 0 && *x-1 >= 0)
    {
        --*x;
        ++*n;
        A[*y][*x] = B[*n];
    }
}

void len(int *n, int *x, int *y, ll A[][101], ll B[], int bound)
{
    while (A[*y-1][*x] == 0 && *y-1 >= 0 && (*y-1 != 0 || *x != 0))
    {
        --*y;
        ++*n;
        A[*y][*x] = B[*n];
    }
}

void xuat(ll A[][101], int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            printf("%lld ",A[i][j]);
        }
        printf("\n");
    }
}

void solve()
{
    ll spiral[101][101] = {{0}};
    ll B[101] = {0};
    fib(B,82);
    int n;
    scanf("%d",&n);
    int count = 0;
    int x = 0,y = 0;
    while (count != n*n-1)
    {
        phai(&count,&x,&y,spiral,B,n);
        xuong(&count,&x,&y,spiral,B,n);
        trai(&count,&x,&y,spiral,B,n);
        len(&count,&x,&y,spiral,B,n);
    }
    xuat(spiral,n);
}


 
int main ()
{
    solve();
}
