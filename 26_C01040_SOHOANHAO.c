#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);
    int halfn=n/2;
    int s=0;
    for ( int i=1 ; i<=halfn ; i++ )
    {
        if (n%i==0)
        {
            s+=i;
        }
    }
    if (s==n)
    {
        printf("1");
    }
    else
        printf("0");
}