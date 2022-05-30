#include<stdio.h>
#include<string.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("%d",(b-a+1)*(a+b)/2);
}