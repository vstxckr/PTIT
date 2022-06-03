#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long

void check(char *s)
{
    if ( s[0] == '0' ) 
    {
        printf("INVALID\n");
        return ;
    }
    int lens = strlen(s);
    int A[10] = {0};
    for ( int i = 0 ; i < lens ; i++ )
    {
        if ( s[i] > '9' || s[i] < '0' )
        {
            printf("INVALID\n");
            return ;
        }
        else
        {
            A[s[i]-48]++;
        }
    }
    for ( int i = 0 ; i <= 9 ; i++ )
    {
        if ( A[i] == 0 )
        {
            printf("NO\n");
            return ;
        }
    }
    printf("YES\n");
}

void solve(int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        char s[10000];
        scanf("%s",s);   
        check(s);
    }
}
 
int main ()
{
    int n;
    scanf("%d",&n);
    solve(n);
}