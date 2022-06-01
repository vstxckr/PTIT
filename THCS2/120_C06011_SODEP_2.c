#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void xuli()
{
    char x[100001]={};
    gets(x);
    int lenx=strlen(x);
    if ( x[0]!='8' || x[lenx-1]!='8')
    {
        printf("NO\n");
        return ;
    }
    int s=0;
    for ( int i=0 ; i<lenx ; i++ )
    {
        s+=x[i]-48;
    }
    if (s%10!=0)
    {
        printf("NO\n");
        return ;
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