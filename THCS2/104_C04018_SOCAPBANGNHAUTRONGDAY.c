#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>



void xuli(int n)
{
    int A[100]={};
    int dem=0;
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
        if (A[i]==A[i-1])
        {
            dem++;
        }
    }
    printf("%d\n",dem); 
}


int main()
{
    int t;
    scanf("%d",&t);
    for ( int i=1 ; i<=t ; i++ )
    {
        int n;
        scanf("%d",&n);
        xuli(n);
    }
}