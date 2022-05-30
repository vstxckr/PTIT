#include<stdio.h>
#include<math.h>

void solve(int n, int p)
{
    int count = 0;
    int temp = log2(n)/log2(p); 
    for ( int i = 1 ; i <= temp ; i++ )
    {
        count += n/(pow(p,i));
    }
    printf("%d\n",count);
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,p;
        scanf("%d %d",&n,&p);
        solve(n,p);
    }
}