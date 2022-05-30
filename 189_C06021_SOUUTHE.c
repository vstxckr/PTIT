#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long


void check(char *s, int lens)
{
    if (s[0] == '0')
    {
        printf("INVALID\n");
        return ;
    }
    int le = 0, chan = 0;
    for ( int i = 0 ; i < lens ; i++ )
    {
        if (s[i] < '0' || s[i] > '9')
        {
            printf("INVALID\n");
            return ;
        }
        if ( ((s[i] - 48)&1) )
        {
            le++;
        }
        else
        {
            chan++;
        }
    }
    if ( (chan > le && !(lens & 1)) || ((le > chan) && (lens & 1)) )
    {
        printf("YES\n"); 
    }
    else
    {
        printf("NO\n");
    }
}

void solve()
{
    char s[1005] = {'\0'};
    gets(s);
    check(s,strlen(s));
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