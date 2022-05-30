#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


void solve(int n)
{
    printf("@\n");
    for ( int i = 1 ; i <= n*2-1 ; i+=2 )
    {
        int dem = 1;
        printf("@");
        for ( int j = 1 ; j <= i ; j++ )
        {
            if ( dem <= i )
            {
                printf("%c",dem+65);
            }
            else
            {
                printf("%c",i*2-dem+65);
            }
            dem += 2;
        }
        printf("@\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n); 
    solve(n-1);
}
