#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long

void lowerr(char *s, int lens)
{
    for ( int i = 1 ; i < lens ; i++ )
    {
        if ( s[i] >= 65 && s[i] <= 90 )
        {
            s[i]+=32;
        }
    }
}

void sepr(char *s)
{
    char x[80][80] = {'\0'};    
    int lens = strlen(s);
    s[lens] = ' ';
    s[lens+1] = '\0';
    int dem = 0;
    for ( int i = 0 ; i <= lens ; i++ )
    {
        if ( s[i] != ' ' && s[i+1] == ' ' )
        {
            strncat(x[dem],s+i,1);
            lowerr(x[dem],strlen(x[dem]));
            dem++;
        }
        else if ( s[i] != ' ' )
        {
            strncat(x[dem],s+i,1);
        }
    }
    for ( int i = 1 ; i < dem ; i++ )
    {
        if ( x[i][0] >= 97 && x[i][0] <= 122) x[i][0] -= 32;
        printf("%s",x[i]);
        if ( i != dem - 1 )  printf(" ");
    }
    int ho = strlen(x[0]);
    for ( int i = 0 ; i < ho ; i++ ) x[0][i] = toupper(x[0][i]);
    printf(", %s\n",x[0]);
}

void solve(int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        char s[1000] = {'\0'};
        gets(s);
        sepr(s);
    }
}
 
int main ()
{
    int n;
    scanf("%d",&n);
    getchar();
    solve(n);
}