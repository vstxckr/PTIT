#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void xuli(char s[100])
{
    int len=strlen(s);
    if (s[0]-48 != (s[len-1]-48)*2 && (s[0]-48)*2 != s[len-1]-48)
    {
        printf("NO\n");
        return ;
    }
    int l=1;
    int r=len-2;
    while (l<r)
    {
        if (s[r]!=s[l])
        {
            printf("NO\n");
            return ;
        }
        l++;
        r--;
    }
    printf("YES\n");
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