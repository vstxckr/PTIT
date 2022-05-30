#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char s[100]={'\0'};
        scanf("%s",&s);
        int lens=strlen(s);
        int i;
        for ( i=0 ; i<lens-1 ; i++ )
        {
            if (s[i]>s[i+1])
            {
                printf("NO\n");
                break;
            }
        }
        if (i==lens-1) printf("YES\n");
    }
}