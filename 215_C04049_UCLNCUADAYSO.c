#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

int lcm(int a, int b)
{
    int hold = a*b;
    while(a*b)
    {
        a %= b;
        int temp = a;
        a = b;
        b = temp;
    }
    return hold/(a+b);
}

void solve(int *A, int n)
{
    printf("%d ",A[0]);
    for ( int i = 0 ; i < n-1 ; i++ )
    {
        printf("%d ",lcm(A[i],A[i+1]));
    }
    printf("%d\n",A[n-1]);
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n, A[1005];
        scanf("%d",&n);
        for ( int i = 0 ; i < n ; i++ )
        {
            scanf("%d",&A[i]);
        }
        solve(A,n);
    }
}