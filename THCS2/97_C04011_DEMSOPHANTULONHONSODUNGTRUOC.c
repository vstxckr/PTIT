#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

void xuli(int n)
{
    int A[1000]={0};
    for ( int i=1 ; i<=n ; i++ )    
    {
        scanf("%d",&A[i]);
    }
    int dem=0;
    for ( int i=2 ; i<= n ; i++ )
    {
        bool check=true;
        for ( int j=i ; j>=1 ; j-- )
        {
            if (A[i]<A[j-1])
            {
                check=false;
                break;
            }
        }
        if (check==true)
            dem++;
    }
    printf("%d\n",dem+1);
}

int main()
{
    int n;
    int t;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        xuli(n);
    }
}