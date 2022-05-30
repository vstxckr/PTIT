#include <stdio.h>
#include <string.h>
#include <math.h>

void bprint(int n)
{
    if ( n == 0 ) 
    {
        printf("0");
        return ;
    }
    int max = log2(n);
    for ( int i = max ; i >= 0 ; i-- )
    {
        printf("%d", (n >> i) & 1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    bprint(n);
}
