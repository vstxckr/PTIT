#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void fibo(int n,int F[])
{
    for ( int i=2 ; i<=n ; i++ )
    {
        F[i]=F[i-1]+F[i-2];
    }
}

bool findfib(int n,int F[])
{
    for ( int i=0 ; i<=44 ; i++ )
    {
        if (n==F[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int F[100]={0};
    F[0]=1,F[1]=1;
    fibo(44,F);
    int n;
    scanf("%d",&n);
    printf("%d",findfib(n,F));
}