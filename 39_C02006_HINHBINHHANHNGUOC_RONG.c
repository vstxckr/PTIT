#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    
    for ( int i=1 ; i<=a ; i++ )
    {
        for ( int k=1 ; k<=i-1 ; k++ )
        {
            printf("~");
        }
        for ( int j=1 ; j<=b ; j++ )
        {
            if (i==1 || i==a || j==1 || j==b)
                printf("*");
            else
                printf(".");
        }
        printf("\n");
    }
}