#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


// void padding (int n)
// {
//     for ( int i = 1 ; i <= n ; i++ )
//     {
//         printf("~");
//     }
// }

void solve(int n)
{
    for ( int i = 2 ; i <= n*2 ; i+=2 ) 
    {
        int dem = 2;
        for ( int j = 1 ; j <= i-1 ; j++ )
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
    }
}

int main()
{
    int n;
    scanf("%d",&n); 
    solve(n);
}
