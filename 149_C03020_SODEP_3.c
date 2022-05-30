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
    int dem = 0;

    while ( n != 0 )
    {
        if ( n % 10 == 6) dem++;
        s += n % 10;
        A[i++] = n % 10;
        n /= 10;
    }

    if ( dem == 0 || s % 10 != 8 ) return false;
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
    int a,b;
    scanf("%d %d",&a,&b);

    if ( a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    for ( int i = a ; i <= b ; i++ )
    {
        if (solve(i)) printf("%d ",i);
    }
}
