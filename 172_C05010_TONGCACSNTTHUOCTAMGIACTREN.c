#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define ll long long

bool snt(int n)
{
    if ( n < 2 ) return false;
    for ( int i = 2 ; i <= sqrt(n) ; i++ )
    {
        if ( n % i == 0 )
            return false;
    }
    return true;
}

void solve(int n)
{
    int A[101][101]; 
    //nhap mang
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = 0 ; j < n ; j++ )
        {
            scanf("%d",&A[i][j]);
        }
    }
    int sum = 0;
    for ( int i = 0 ; i < n ; i++ )
    {
        for ( int j = i ; j < n ; j++ )
        {
            if (snt(A[i][j]))
            {
                sum += A[i][j];
            }
        }
    }

    printf("%d\n",sum);
}


 
int main ()
{
    int n;
    scanf("%d",&n);
    solve(n);
}