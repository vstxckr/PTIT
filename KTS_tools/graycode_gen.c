/*   n bit Gray-Code Generator with input is n
/    Code using simple recursion solution of Gray-Code Generator
/    n+1 bit Gray-Code = ("0" + n-1_bit Gray-Code ) + ("1" + n-1_bit (reflected) Gray-Code)
/                                     - by vstxckr - 
*/
#include<stdio.h>
#include<string.h>
#include<math.h>

void in_man(char s[][64], int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        printf("%s\n",s[i]);
    }
}

void solve(char s[][64], int n, int j)
{
    if (j==n+1) 
    {
        in_man(s,pow(2,n));
        return ;
    }

    int stop = pow(2,j);
    for ( int i = stop/2 ; i < stop ; i++ )
    {
        strcpy(s[i],s[stop-i-1]);
    }

    for ( int i = 0 ; i < stop/2 ; i++ )
    {
        int lens = strlen(s[i]), lens_2 = strlen(s[stop/2+i]);
        memmove(s[i]+1,s[i],lens);
        s[i][0] = '\0';
        memmove(s[stop/2+i]+1,s[stop/2+i],lens);
        s[stop/2+i][0] = '\0';
    }

    for ( int i = 0 ; i < stop/2 ; i++ )
    {
        s[i][0] = '0';
        s[stop/2+i][0] = '1';
    }

    solve(s,n,j+1);
}

int main()
{
    int n;
    char s[2000][64] = {'\0'}; 
    strcpy(s[0],"0");
    strcpy(s[1],"1");
    scanf("%d",&n);
    solve(s,n,2);
}