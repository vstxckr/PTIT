#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int quote = 0, dquote = 0, bracket = 0, sbracket = 0, cbracket = 0;

void inc(char x)
{
    switch (x)
    {
        case '\'': quote++; return;
        case '\"': dquote++; return;
        case '(' : bracket++; return;
        case ')' : bracket--; return;
        case '[' : sbracket++; return;
        case ']' : sbracket--; return;
        case '{' : cbracket++; return;
        case '}' : cbracket--; return;
    }
}

void solve(char *s)
{
    int len_s = strlen(s);
    for ( int i = 0 ; i < len_s ; i++ )
    {
        inc(s[i]);
    }
    if ( quote % 2 != 0 || dquote % 2 != 0 || sbracket != 0 || cbracket != 0 || bracket != 0 )
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
}

int main()
{
    char x[1000] = {'\0'};
    scanf("%s",&x);
    solve(x);
}
