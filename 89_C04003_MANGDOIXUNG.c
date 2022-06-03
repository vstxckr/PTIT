#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>


void xuli(int n)
{
    int A[100000]={0};
    for ( int i=1 ; i<=n ; i++ ) 
    {
        scanf("%d",&A[i]);
    }
    int l=1;
    int r=n;
    while (l<r)
    {
        if (A[l]!=A[r])
        {
            printf("NO\n");
            return ;
        }
        l++;
        r--;
    }
    printf("YES\n");
}


int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        xuli(n);
    }
}