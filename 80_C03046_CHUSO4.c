#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool xuli(int n)
{
    int hold=n;
    int dao=0;
    int s=0;
    while (n!=0)
    {
        if (n%10==4)
        {
            return false;
        }
        dao=dao*10+n%10;
        s+=n%10;
        n/=10;
    }
    if (dao==hold && s%10==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void somayman(int n)
{
    int a=pow(10,n-1);
    int b=pow(10,n)-1;
    for ( int i=a ; i<=b ; i++ )
    {
        if (xuli(i))
        {
            printf("%d ",i);
        }
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--) 
    {
        int n;
        scanf("%d",&n);
        somayman(n);
    }
}