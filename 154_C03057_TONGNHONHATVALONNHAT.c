#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


void swap_min(char *x, int lenx)
{
    for ( int i = 0 ; i < lenx ; i++ )
    {
        if ( x[i] == '6' )
        {
            x[i] = '5';
        }
    }
}

void swap_max(char *x, int lenx)
{
    for ( int i = 0 ; i < lenx ; i++ )
    {
        if ( x[i] == '5' )
        {
            x[i] = '6';
        }
    }
}

long long str_to_de(char *x, int lenx)
{
    long long s = 0;
    for ( int i = 0 ; i < lenx ; i++ )
    {
        s = (s * 10) + (x[i]-48);
    }
    return s;
}

void solve(char *x, char *y)
{
    char w[20], z[20]; 
    strcpy(w,x);
    strcpy(z,y);
    int lenx = strlen(x), leny = strlen(y);

    swap_min(x, lenx);
    swap_min(y, leny);
    printf("%lld ",str_to_de(x,lenx)+str_to_de(y,leny));

    swap_max(w,lenx);
    swap_max(z,leny);
    printf("%lld\n",str_to_de(w,lenx) + str_to_de(z,leny));
}


int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char x[20] = {'\0'}, y[20] = {'\0'};
        scanf("%s %s",&x,&y);
        solve(x,y);
    }
}