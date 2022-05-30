#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int giaithua(int n)
{
    int m=1;
    for (int i=1 ; i<=n ; i++ )
    {
        m*=i;
    }
    return m;
}

int main()
{
    int n;
    scanf("%d",&n);
    int hold=n;
    int s=0;
    while (n!=0)
    {
        s+=giaithua(n%10);
        n/=10;
    }
    if (s==hold)
    {
        printf("1");
    }
    else
        printf("0");
}