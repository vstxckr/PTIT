#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool checknt(char x)
{
    if (x=='2' || x=='3' || x=='5' || x=='7')
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
        if (checknt(x[i])==false)
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