#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool ktra_hh(int n)
{
    int s=1;
    int hold=n;
    int mu=0;
    while (n%2==0)
    {
        mu++;
        n/=2;
    }
    if (mu!=0)
    {
        s*=(pow(2,mu+1)-1);
    }
    for ( int i=3 ; i<=sqrt(n) ; i+=2)
    {
        mu=0;
        while (n%i==0)
        {
            mu++;
            n/=i;
        }
        if (mu!=0)
        {
            s*=(pow(i,mu+1)-1)/(i-1);
        }
    }
    if (n>1)
    {
        s*=(pow(n,2)-1)/(n-1);
    }
    if (s-hold==hold)
        return true;
    else
        return false;
}

int main()
{
    int n;
    scanf("%d",&n); 
    for ( int i=1 ; i<n ; i++ )
    {
        if (ktra_hh(i)==true)
        {
            printf("%d ",i);
        }
    }
}