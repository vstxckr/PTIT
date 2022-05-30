#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void xuli()
{
    char x[1000]={};
    gets(x);
    int lenx=strlen(x);
    char temp[1000]={};
    temp[0]=' ';
    for ( int i=1 ; i<=lenx ; i++ )
    {
        temp[i]=x[i-1];
    }
    int dem=0;
    for ( int i=1 ; i<=lenx ; i++ )
    {
        if (temp[i]!=' ' && temp[i-1]==' ')
        {
            dem++;
        }
    }
    printf("%d\n",dem);
}


int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for ( int i=1 ; i<=t ; i++ )
    {
        xuli();
    }
}