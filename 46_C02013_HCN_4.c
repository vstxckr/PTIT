#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int max;
    if (a>b) max=a; else max=b;
    for ( int i=1 ; i<=a ; i++ ) 
    {
        
        int dem=0;
        for ( int j=max-i+1 ; dem!=b && j>=1 ; j-- )
        {
            printf("%d",j);
            dem++;
        }
        for ( int j=2 ; dem!=b ; j++ )
        {
            printf("%d",j);
            dem++;
        }
        printf("\n");

    }
}