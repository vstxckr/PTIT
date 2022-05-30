#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

int tongcs(int n)
{
    int s=0;
    while (n!=0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}



int main()
{
    int F[100]={0};
    int a,b;
    scanf("%d %d",&a,&b);
    if (tongcs(a)>tongcs(b))
    {
        printf("%d %d",b,a);
    }
    else
    {
        printf("%d %d",a,b);
    }
}