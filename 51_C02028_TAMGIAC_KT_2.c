#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int n;
    scanf("%d",&n);
    char s[100]={'\0'};
    int dem=1;
    for ( int i=0 ; i<n ; i++ )
    {
        s[i]= 64+dem;
        dem+=2;
    }
    for ( int i=0 ; i<n ; i++ )
    {
        for ( int j=i ; j<n ; j++ )
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
}