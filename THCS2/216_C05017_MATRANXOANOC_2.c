#include<stdio.h>
#define ll long long


void phai(int *count, int *x, int *y, int A[][101], int level, int bound)
{
    while ( *x+1 < bound-level && *count != 0)
    {
        ++*x;
        --*count;
        printf("%d ",A[*y][*x]);
    }
}
void xuong(int *count, int *x, int *y, int A[][101], int level, int bound)
{
    while ( *y+1 < bound-level && *count != 0)
    {
        ++*y;
        --*count;
        printf("%d ",A[*y][*x]);
    }
}
void trai(int *count, int *x, int *y, int A[][101], int level)
{
    while ( *x-1 >= level && *count != 0)
    {
        --*x;
        --*count;
        printf("%d ",A[*y][*x]);
    }
}
void len(int *count, int *x, int *y, int A[][101], int level)
{
    while ( *y-1 >= level+1 && *count != 0)
    {
        --*y;
        --*count;
        printf("%d ",A[*y][*x]);
    }
}

void solve(int m,int n)
{
    int A[10020] = {0};
    int spiral[101][101] = {0};
    for ( int i = 0 ; i < m*n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    int dem = -1;
    for ( int i = 0 ; i < m ; i++ ) 
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            spiral[i][j] = A[++dem];
        }
    }
    int count = n*m - 1;
    int level = 0;
    int x = 0, y = 0;
    printf("%d ",A[0]);
    while ( count != 0 )
    {
        phai(&count,&x,&y,spiral,level,n);
        xuong(&count,&x,&y,spiral,level,m);
        trai(&count,&x,&y,spiral,level);
        len(&count,&x,&y,spiral,level); 
        level++;
    }
    printf("\n");
}


 
int main ()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int m, n;
        scanf("%d %d",&m,&n);
        solve(m,n);
    }
}