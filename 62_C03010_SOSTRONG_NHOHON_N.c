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
    int n;
    scanf("%d",&n);
    for ( int i=1 ; i<n ; i++ )
    {
        if (strong(i)==i)
        {
            printf("%d ",i);
        }
    }
}