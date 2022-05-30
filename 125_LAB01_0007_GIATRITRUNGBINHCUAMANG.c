#include <stdio.h>
#include <string.h>

int main()
{
    int n, s = 0;

    scanf("%d",&n);
    for ( int i = 0 ; i < n ; i++ )
    {
        int temp;
        scanf("%d",&temp);
        s += temp;
    }
    printf("%.3lf",(double)s/n);
}
