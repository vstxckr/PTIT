#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>

int A[1001][1001];

void solve()
{
    int m, n;
    char s[1002] = {'\0'};
    int hang[1001][3] = {0}, cot[1001][3] = {0};
    memset(A,0,sizeof(A));
    scanf("%d %d",&m, &n);
    for ( int i = 0 ; i < m ; i++ )
    {
        scanf("%s",&s);
        for ( int j = 0 ; j < n ; j++ )
        {
            A[i][j] = s[j] - 48;
            if (A[i][j]) hang[i][A[i][j]]++;
            if (A[i][j]) cot[j][A[i][j]]++;
        }
    }
    long long sum = 0;
    for ( int i = 0 ; i < m ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            if (A[i][j])
            {
                for ( int k = 1 ; k <= 2 ; k++ )
                {
                    if (A[i][j] != k)
                    {
                        sum += hang[i][k]*cot[j][k];
                    }
                }
            }
        }
    }
    printf("%lld\n",sum);
}

int main()
{
    int t;
    scanf("%d",&t);
    for ( int i = 1 ; i <= t; i++ )
    {
        solve();
    }
}