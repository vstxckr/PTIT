#include<stdio.h>
#include<string.h>

int main()
{
    char s[100]={'\0'};
    scanf("%s",&s);
    int lens=strlen(s);
    int m=1;
    for ( int i=0 ; i<lens ; i++ ) 
    {
        m*=(int)s[i]-48;
    }
    printf("%d",m);
}