#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int n;
    scanf("%d",&n);
    for ( int i=n ; i>=1 ; i-- )
    {
        for ( int j=i ; j<= i+i-1 ; j++ )
        {
            printf("%c",63+j);
        }
        printf("\n");
    }
}