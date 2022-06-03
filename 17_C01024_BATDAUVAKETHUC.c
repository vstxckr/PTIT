#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[100]={'\0'};
        scanf("%s",s);
        int len_s=strlen(s)-1; 
        if (s[0]==s[len_s])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

}