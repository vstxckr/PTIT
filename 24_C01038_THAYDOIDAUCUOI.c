#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    char s[100]={'\0'};
    scanf("%s",&s);
    char x=s[0];
    int lens=strlen(s);
    s[0]=s[lens-1];
    s[lens-1]=x;
    bool isdone=false;
    for ( int i=0 ; i<lens ; i++ )
    {
        if ((s[i]!='0' && isdone==false) || (isdone==true))
        {
            printf("%c",s[i]);
            isdone=true;
        }
    }
}