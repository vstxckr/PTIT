#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


long long *fibo(int n)
{
    static long long A[100] = {0};
    A[0] = 0;
    A[1] = 1;
    A[2] = 1;
    for ( int i = 3 ; i <= n ; i++ )
    {
        A[i] = A[i-1] + A[i-2];
    }
    return A;
}

void solve(long long n, long long *A)
{
    for ( int i = 0 ; i <= 92 ; i++ )
    {
        if (A[i] == n)
        {
            printf("YES\n");
            return ;
        }
    }
    printf("NO\n");
}
int main()
{
    int t;
    long long *A = fibo(92);
    scanf("%d",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n); 
        solve(n,A);
    }
}