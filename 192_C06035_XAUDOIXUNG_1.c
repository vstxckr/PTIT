#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long


void solve()
{
    char s[1000] = {'\0'};
    gets(s);
    int lens = strlen(s);
    int count = 0;
    for ( int i = 0 ; i < lens/2 ; i++ )
    {
        if ( s[i] != s[lens-i-1] )
        {
            count++;
        }
    }
    if (count > 1 || !(lens&1) && count == 0 )
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
}
 
int main ()
{
    int t;
    scanf("%d",&t);
    getchar();
    while (t--)
    {
        solve();
    }
}