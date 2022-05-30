#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>



void xuli(int n)
{
    int A[100]={};
    int dem=0;
    scanf("%d",&A[1]);
    int max=A[1];
    int vtmax=1;
    for ( int i=2 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
        if (A[i]>max) 
        {
            max=A[i];
            vtmax=i;
        }
    }
    int max2=-200000000;
    for ( int i=1 ; i<=n ; i++ )
    {
        if ( vtmax!=i && A[i]>max2 && A[i] != max)
        {
            max2=A[i];
        }
    }
    printf("%d %d",max,max2);
}


int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}