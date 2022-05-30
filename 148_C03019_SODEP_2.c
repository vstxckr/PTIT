#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


long long A[100];

bool solve(int n)
{
    int A[11] = {0}; 
    int i = 0;
    int s = 0;
    while ( n != 0 )
    {
        s += n % 10;
        A[i++] = n % 10;
        n /= 10;
    }
    if ( s % 10 != 0) return false;
    for ( int j = 0 ; j < i ; j++ )
    {
        if (A[j] != A[i-j-1]) 
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n); 
        int a = pow(10,n-1);
        int b = pow(10,n) - 1;
        int dem = 0;
        for ( int i = a ; i <= b ; i++ )
        {
            if (solve(i)) dem++;
        }
        printf("%d\n",dem);
    }
}
