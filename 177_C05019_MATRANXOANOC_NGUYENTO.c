#include<stdio.h>
#include<math.h>
#include<stdbool.h>

void sangnt(bool *B, int n)
{
    B[0] = true;
    B[1] = true;
    for ( int i = 2 ; i <= sqrt(n) ; i++ )
    {
        int j = i*i;
        while (j <= n)
        {
            B[j] = true;
            j += i;
        }
    }
}

int nextsnt(bool *B, int *i)
{
    (*i)++;
    while (1)
        if (!B[*i]) 
            return *i;
        else
            (*i)++;
}

void phai(int *x, int *y, int *count, int A[][101], int level, int n, bool *B, int *i)
{
    while (*x < n-level-1 && *count != 1)
    {
        A[*y][++(*x)] = nextsnt(B,i);
        (*count)--;
    }
}

void xuong(int *x, int *y, int *count, int A[][101], int level, int n, bool *B, int *i)
{
    while (*y < n-level-1 && *count != 1)
    {
        A[++(*y)][*x] = nextsnt(B,i);
        (*count)--;
    }
}

void trai(int *x, int *y, int *count, int A[][101], int level, int n, bool *B, int *i)
{
    while (*x > level && *count != 1)
    {
        A[*y][--(*x)] = nextsnt(B,i);
        (*count)--;
    }
}

void len(int *x, int *y, int *count, int A[][101], int level, int n, bool *B, int *i)
{
    while (*y > level+1 && *count != 1)
    {
        A[--(*y)][*x] = nextsnt(B,i);
        (*count)--;
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


void solve(int n, bool *B, int test)
{
    int level = 0, x = 0 , y = 0;
    int A[101][101] = {0};

    int index = 2;
    A[0][0] = 2;

    int count = n*n;

    while (count != 1)
    {
        phai(&x,&y,&count,A,level,n,B,&index);
        xuong(&x,&y,&count,A,level,n,B,&index);
        trai(&x,&y,&count,A,level,n,B,&index);
        len(&x,&y,&count,A,level,n,B,&index);
        level++;
    }
    printf("Test %d:\n",test);
    xuat(A,n);
}

int main()
{
    int t;
    scanf("%d",&t);
    bool B[5001] = {false};
    sangnt(B,5000);
    for ( int i = 1 ; i <= t ; i++ )
    {
        int n;
        scanf("%d",&n);
        solve(n,B,i);
    }
    return 0;
}
