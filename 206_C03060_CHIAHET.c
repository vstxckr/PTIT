#include<stdio.h>
#include<math.h>

#define ll long long


void solve(int n, int k)
{
    int temp = log2(n);
    int count = 0;
    for ( int i = 1 ; i <= temp ;i ++ )
    {
        count += n/pow(2,i);
    }
    if ( count >= k )
        printf("Yes");
    else
        printf("No");
}

int main()
{
    int n, k;
    scanf("%d %d",&n, &k);
    solve(n,k);
}