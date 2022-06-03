#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool A[1299710];

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
    sangnt(1299710);
    scanf("%d",&n);
    int i=2;
    int dem=0;
    while (dem<n)
    {
        if (A[i]==false)
        {
            dem++;
            printf("%d\n",i);
        }
        i++;
    }
}