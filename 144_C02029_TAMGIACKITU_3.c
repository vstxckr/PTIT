#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


void solve(int n)
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        int gap = n;
        int pivot = 64+i;
        for ( int j = 1 ; j<= i ; j++ )
        {
            
            printf("%c ",pivot);
            gap--;
            pivot += gap;
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
