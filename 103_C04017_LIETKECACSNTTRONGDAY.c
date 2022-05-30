#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool snt(int n)
{
    if (n<2) return false;
    for ( int i=2 ; i<=sqrt(n) ; i++ )
    {
        if (n%i==0) return false;
    }
    return true;
}

void xuli(int n)
{
    int A[100]={};
    for ( int i=1 ; i<=n ; i++ )
    {
        scanf("%d",&A[i]);
    }

    int s=0;
    int B[100]={};

    for ( int i=1 ; i<=n ; i++ )
    {
        if ( snt(A[i]) == true )
        {
            s++;
            B[s]=A[i];
        }
    }

    printf("%d ",s);
    for ( int i=1 ; i<=s ; i++ )
    {
        printf("%d ",B[i]);
    }

}


int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}