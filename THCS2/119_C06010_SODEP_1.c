#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool isOdd(char x)
{
    if (x=='0' || x=='2' || x=='4' || x=='6' || x=='8' )
    {
        return true;
    }
    else
    {
        return false;
    }
}

void xuli()
{
    char x[100001]={};
    gets(x);
    int lenx=strlen(x);
    for ( int i=0 ; i<lenx ; i++ )
    {
        if (isOdd(x[i])==false)
        {
            printf("NO\n");
            return ;
        }
    }
    int left=0;
    int right=lenx-1;
    while (left<right)
    {
        if (x[left]!=x[right])
        {
            printf("NO\n");
            return ;
        }
        left++;
        right--;
    }
    printf("YES\n");
}


int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while (t--)
    {
        xuli();
    }
}