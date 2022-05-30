#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#define ll long long


int sepr(char (*s)[50], char *y)
{
    char *x = strtok(y," ");
    int i = 0;
    while (x != NULL)
    {
        strcpy(s[i++],x);
        x = strtok(NULL," ");
    }
    return --i;
}

void solve()
{
    char s[20][50];    
    char temp[60];
    gets(temp);
    int count = sepr(s,temp);
    for ( int i = 0 ; i < count ; i++ )
    {
        if ( s[i][0] <= 90 && s[i][0] >= 65) s[i][0] += 32;
        printf("%c",s[i][0]);
    }
    int foo = strlen(s[count]);
    for ( int i = 0 ; i < foo ; i++ )
    {
        if ( s[count][i] <= 90 && s[count][i] >= 65) s[count][i] += 32;
        printf("%c",s[count][i]);
    }
    printf("@ptit.edu.vn");
}
 
int main ()
{
    solve();
}