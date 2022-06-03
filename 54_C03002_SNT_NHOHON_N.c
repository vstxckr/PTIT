#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool A[1000001];

void sangnt(int n)
{
    for ( int i=2 ; i<=sqrt(n) ; i++ )
    {
        int j=i*i;
        while (j<=n)
        {
            A[j]=true;
            j+=i;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    sangnt(n);
    for ( int i=2 ; i<=n ; i++)
    {
        if (A[i]==false)
        {
            printf("%d\n",i);
        }
    }
}