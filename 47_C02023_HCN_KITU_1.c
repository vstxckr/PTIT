#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char s[100]={'\0'};
    int max;
    if (a>b) max=a; else max=b;
    for ( int i=0 ; i<b ; i++ )
    {
        s[i]=b+96;
    }
    for ( int i=0 ; i<a ; i++ )
    {
        if (i<=b)
        {
            for ( int j=i ; j<b ; j++ )
            {
                s[j]=96+max-i;
            }
            printf("%s\n",s);
        }
        else
            printf("%s\n",s);
    }
}