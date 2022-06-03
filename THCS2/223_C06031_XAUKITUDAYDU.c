#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>

char s[100];
int n;
int max = 0;


void solve(char x, int m, int dem)
{
    for ( int i = m ; i < n ; i++ )
    {
        if (s[i] > x && i < n)
        {
            dem++;
            if (dem==26)
            {
                printf("0\n");
                exit(0);
            }
            solve(s[i],i+1,dem);
            dem--;
        }
    }
    if (dem > max) max = dem;
}

int main()
{
    gets(s);
    n = strlen(s);
    for ( int i = 0 ; i < n ; i++ )
    {
        solve(s[i],i+1,1);
    }
    printf("%d\n",26-max);
}