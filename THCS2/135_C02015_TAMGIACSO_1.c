#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define max(a,b) a > b ? a : b

void solve(int n)
{
    int dem = 1;
    for ( int i = 1 ; i <= n ; i++ )
    {
        for ( int j = 1 ; j <= dem ; j++ )
        {
            printf("%d",j);
        }
        dem +=2 ;
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n); 
    solve(n);
}
