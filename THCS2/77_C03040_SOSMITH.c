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

void thuaso(int n)
{
    int dem=0;
    int hold=n;
    int A[100]={0},B[100]={0};

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
        B[dem]++;
    }
    int s=0;
    for ( int i=1 ; i<=dem ; i++ )
    {
        s+=tongcs(A[i])*B[i];
    }
    if (tongcs(hold)==s)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    thuaso(n);
}