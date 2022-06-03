#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int cmpr(char *s, char *r)
{
    char x[30] = {'\0'}, y[30] = {'\0'};
    strcpy(x,s);
    strcpy(y,r);
    strcat(x,r);
    strcat(y,s);
    if ( strcmp(x,y) >= 0 )
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void solve(int n)
{
    char x[20][20];
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf("%s",x[i]);
    }
    for ( int i = n - 2 ; i >= 0 ; i-- )
    {
        for ( int j = 0 ; j <= i ; j++ )
        {
            if ( cmpr(x[j],x[j+1]) > 0 )
            {
                char temp[20];
                strcpy(temp,x[j]);
                strcpy(x[j],x[j+1]);
                strcpy(x[j+1],temp);
            }
        }
    }
    for ( int i = 0 ; i < n ; i++ )
    {
        printf("%s",x[i]);
    }
    printf("\n");
}


int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        solve(n);
    }
}