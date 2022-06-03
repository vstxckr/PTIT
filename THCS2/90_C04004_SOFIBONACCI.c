#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

long long A[100];
void fibo()
{
    A[1]=1,A[2]=1;
    for ( int i=3 ; i<=92 ; i++ )
    {
        A[i]=A[i-1]+A[i-2];
    }
}

int main()
{
    int t;
    fibo();
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        printf("%lld\n",A[n]); 
    }
}