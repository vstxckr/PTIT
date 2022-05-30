#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void fibo(int n,int F[])
{
    if (n==1)
    {
        printf("0");
        return ;
    }
    if (n==2)
    {
        printf("0 1");
        return ;
    }
    printf("0 1 ");
    for ( int i=2 ; i<=n-1 ; i++ )
    {
        F[i]=F[i-1]+F[i-2];
        printf("%d ", F[i]);
    }
}



int main()
{
    int n;
    int F[100]={0};
    F[0]=0,F[1]=1;
    scanf("%d",&n);
    fibo(n,F);
}