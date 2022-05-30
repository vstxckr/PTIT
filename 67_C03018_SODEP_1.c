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

bool timfibo(int n,int F[])
{
    int cantim=tongcs(n);
    for ( int i=0 ; i<=43 ; i++ )
    {
        if (F[i]==cantim)
        {
            return true;
        }
    }
    return false;
}

bool snt(int n)
{
    if (n<2) return false;
    for ( int i=2 ; i<=sqrt(n) ; i++ )
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

void fibo(int F[])
{
    F[0]=1;
    F[1]=1;
    for ( int i=2; i<=43 ; i++ )
    {
        F[i]=F[i-1]+F[i-2];
    }
}

int main()
{
    int F[100]={0};
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    fibo(F);
    for ( int i=a ; i<=b ; i++ )
    {
        if (snt(i)==true && timfibo(i,F)==true)
        {
            printf("%d ",i);
        }
    }
}