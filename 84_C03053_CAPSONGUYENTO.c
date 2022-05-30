#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

int A[10001];

void sangnt()
{
    for ( int i=2 ; i<=sqrt(10000) ; i++ )
    {
        int j=i*i;
        while (j<=10000)
        {
            A[j]=1;
            j+=i;
        }
    }
}

void tongnt(int n)
{
    for ( int i=2 ; i<= n/2 ; i++ )
    {
        if (A[i]==0 && A[n-i]==0)
        {
            printf("%d %d ",i,n-i);
        }
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d",&t);
    sangnt();
    while (t--)
    {
        int n;
        scanf("%d",&n);
        tongnt(n);
    }
}