#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


void padding (int n)
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        printf("~");
    }
}

void solve(int n)
{
    int padding_count = n-1;
    for ( int i = 1 ; i <= n*2-1 ; i+=2 ) 
    {
        padding(padding_count);
        int dem = 1;
        for ( int j = 1 ; j <= i ; j++ )
        {
            if ( dem <= i )
            {
                printf("%d",dem);
            }
            else
            {
                printf("%d",i*2 - dem);
            }
            dem += 2;
        }
        printf("\n");
        padding_count--;
    }
}

int main()
{
    int n;
    scanf("%d",&n); 
    solve(n);
}
