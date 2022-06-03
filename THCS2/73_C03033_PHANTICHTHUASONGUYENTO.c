#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void factors(int n)
{
    int mu=0;
    int A[100]={0};
    int B[100]={0};
    int dem=0;
    if (n%2==0)
    {
        dem++;
        A[dem]=2;
    }
    while (n%2==0)
    {
        B[dem]++;
        n/=2;
    }
    for ( int i=3 ; i<=sqrt(n) ; i+=2 )
    {
        mu=0;
        if (n%i==0)
        {
            dem++;
            A[dem]=i;
        }
        while (n%i==0)
        {
            B[dem]++;
            n/=i;
        }
    }
    if (n>1)
    {
        dem++;
        A[dem]=n;
        B[dem]=1;
    }
    for ( int i=1 ; i<dem ; i++ )
    {
        printf(" %d^%d *",A[i],B[i]);
    }
    printf(" %d^%d\n",A[dem],B[dem]);
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d =",n);
        factors(n);
    }
}