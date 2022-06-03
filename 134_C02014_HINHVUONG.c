#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define max(a,b) a > b ? a : b

void solve(int n)
{
    int max = n*2 - 1;
    for ( int i = 1 ; i <= max ; i++ )
    {
        for ( int j = 1 ; j <= max ; j++ )
        {
            printf("%d", max( abs(i-n)+1, abs(j-n)+1));
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n); 
    solve(n);
}
