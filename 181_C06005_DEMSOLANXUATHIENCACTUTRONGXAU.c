#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long

void lowerr(char *s)
{
    int lens = strlen(s);
    for ( int i = 0 ; i  < lens ; i++ )
    {
        if ( s[i] >= 65 && s[i] <=90 )
        {
            s[i] += 32;
        }
    }
}

bool isdup(char fil[][100], char *x, int n, int A[])
{
    for ( int i = 0 ; i <= n ; i++ )
    {
        if (!strcmp(x,fil[i]))
        {
            A[i]++;
            return true;
        }
    }
    return false;
}

void solve()
{
    char s[100] = {'\0'};
    int A[100] = {0};
    char fil[100][100] = {'\0'};
    int dem = -1;
    while ( scanf("%s",&s) != -1 )
    {
        lowerr(s);
        if (!isdup(fil,s,dem,A))
        {
            dem++;
            strcpy(fil[dem],s);
        } 
    }
    for ( int i = 0 ; i <= dem ; i++ )
    {
        printf("%s %d\n",fil[i],A[i]+1);
    }
}
 
int main ()
{
    solve();
}