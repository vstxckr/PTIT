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
    int min=A[1];
    int vitri=1;
    for ( int i=2 ; i<=n ; i++ )
    {
        if (A[i]<min)
        {
            min=A[i];
            vitri=i;
        }
    }
    printf("%d ",min);
    int mincu=min;
    min=2147483645;
    for ( int i=1 ; i<=n ; i++ )
    {
        if (A[i]<min && i!=vitri && A[i]!=mincu)
        {
            min=A[i];
        }
    }
    printf("%d",min);
}

int main()
{
    int n;
    scanf("%d",&n);
    xuli(n);
}