#include<stdio.h>
#include<stdbool.h>

bool isdone(int A[][11], int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            if (A[i][j])
                return false;
        }
    }
    return true;
}

void swap(int A[][11],int m, int n)
{
    for ( int i = 0 ; i <= m ; i++ )
    {
        for ( int j = 0 ; j <= n ; j++ )
        {
            if (A[i][j])
                A[i][j] = 0;
            else
                A[i][j] = 1;
        }
    }
}

void action(int A[][11], int n, int *dem)
{
    for ( int i = n-1 ; i >= 0 ; i-- )
    {
        for ( int j = n-1 ; j >= 0 ; j-- )
        {
            if (A[i][j])
            {
                ++*dem;
                swap(A,i,j);
            }
        }
    }
}

void solve(int n)
{
    char s[12] = {'\0'};
    int A[11][11] = {0};
    for ( int i = 0 ; i < n ; i++ )
    {
        gets(s);
        for ( int j = 0 ; j < n ; j++ )
        {
            A[i][j] = s[j] - 48;
        }
    }
    int count = 0;
    while(!isdone(A,n))
    {
        action(A,n,&count);
    }
    printf("%d",count);
}

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    solve(n);
}