#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long

bool isdep(char *s)
{
    if (s[0] < s[1] && s[1] < s[2] && s[2] < s[4] && s[4] < s[5]) return true;
    if (s[0] == s[1] && s[1] == s[2] && s[4] == s[5])  return true;

    int lens = strlen(s);
    int count = 0;

    for ( int i = 0 ; i < lens ; i++ )
    {
        if ( s[i] == '6' || s[i] == '8')
        {
            count++;
        }
    }
    if ( count == lens - 1 ) return true;
    return false; 
}

void solve(int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        char s[1000];
        scanf("%s",s);
        scanf("%s",s);
        if (isdep(s)) 
            printf("YES\n"); 
        else
            printf("NO\n");
    }
}
 
int main ()
{
    int n;
    scanf("%d",&n);
    solve(n);
}