#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>



void xuli(int n)
{
    int A[100]={};
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
    }
    for ( int i=n-1 ; i>=2 ; i-- )
    {
        for ( int j=1 ; j<=i ; j++  )
        {
            if (A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    for ( int i=1 ; i<=n ; i++ )
    {
        printf("%d ",A[i]);
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}