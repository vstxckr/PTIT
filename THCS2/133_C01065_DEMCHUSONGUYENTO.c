#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

bool checknt(char x)
{
    switch (x)
    {
        case '2':
        case '3':
        case '5':
        case '7': return true;
    }
    return false;
}

void solve(char *s)
{
    int A[10]={0}, B[10]={0};
    int lens = strlen(s);
    int dem = 0;
    for ( int i = 0 ; i < lens ; i++ )
    {
        if ( checknt(s[i]) && B[s[i]-48] == 0 )
        {
            dem++;
            A[dem] = s[i] -48;
            B[s[i]-48]++;
        }
        else
        {
            B[s[i]-48]++;
        }
    }

    for ( int i = 1 ; i <= dem ; i++ )
    {
        printf("%d %d\n",A[i],B[A[i]]);
    }
}

int main()
{
    char s[100] = {'\0'};
    scanf("%s",&s);
    solve(s);
}
