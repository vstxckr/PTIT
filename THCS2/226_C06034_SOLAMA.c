#include<stdio.h>
#include<string.h>

int trans(char x)
{
    switch (x)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    for ( int i=1 ; i<=n ; i++ )
    {
        char s[100005];
        scanf("%s",&s);
        int len_s=strlen(s);
        int res=0;
        for ( int j=0 ; j<=len_s-2 ; j++ )
        {
            int s1=trans(s[j]);
            int s2=trans(s[j+1]);
            if (s1<s2)
            {
                res-=s1;
            }
            else
            {
                res+=s1;
            }
        }
        printf("%d\n",res+trans(s[len_s-1]));
    }
}