#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

int F[10]={1, 1, 2, 6, 24, 120, 720, 5040, 40320, 3628800};

int strong(int n)
{
    int s=0;
    while (n!=0)
    {
        s+=F[n%10];
        n/=10; 
    }
    return s;
}

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
    for ( int i=a ; i<=b ; i++ )
    {
        if (strong(i)==i)
        {
            printf("%d ",i);
        }
    }
}