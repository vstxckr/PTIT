#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

char quyuoc(char x)
{
    if (x=='0' || x=='8' || x=='9')
        return '0';
    if (x=='1')
        return '1';
    return '2';
}

void xuli(char s[100])
{
    int len=strlen(s);
    for ( int i=0 ; i<len ; i++ )
    {
        char x=quyuoc(s[i]);
        if (x=='2')
        {
            printf("INVALID\n");
            return ;
        }
        else
        {
            s[i]=x;
        }
    }
    bool toggle=false;
    int i;
    for ( i=0 ; i<len ; i++ )
    {
        if (s[i]!='0' && toggle==false || toggle==true)
        {
            printf("%c",s[i]);
            toggle=true;
        }
    }
    if (toggle==false)
    {
        printf("INVALID");
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[100]={'\0'};
        scanf("%s",&s);
        xuli(s);
    }
}