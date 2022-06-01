#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char s[100]={'\0'};
    s[0]='@';
    for ( int i=1 ; i<b ; i++ )
    {
        s[i]=64+i;
    }
    printf("%s\n",s);
    for ( int i=0 ; i<a-1 ; i++ )
    {
        for ( int j=0 ; j<b-1 ; j++ )
        {
            s[j]=s[j+1]; 
        }
        printf("%s\n",s);
    }
}