#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>


void solve(int n, int m, int k)
{
    int A[1001] = {0};
    for ( int i = 1 ; i <= m ; i++ )
    {
        scanf("%d",&A[i]);
    }

    if ( k == 0 )
    {
        printf("%d",n-m);
        return ;
    }

    int res = 0;

    if ( A[1]-k > 1 ) 
        res += (A[0]-k-1)/(k*2+1) + ( ( (A[0]-k-1) % (k*2+1) ) ? 1 : 0 );

    if ( A[m]+k < n ) 
        res += (n-(A[m]+k))/(k*2+1) + ( ((n - (A[m]+k)) % (k*2+1)) ? 1 : 0 );

    for ( int i = 1 ; i < m ; i++ )
    {
        int _empty = (A[i+1]-k-1) - (A[i]+k+1) + 1;
        if ( _empty > 0 )
            res += _empty / (k*2+1) + ( (_empty % (k*2+1)) ? 1 : 0) ;
    }
    printf("%d",res);
}

int main()
{
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    solve(n,m,k);
}