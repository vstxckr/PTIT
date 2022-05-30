#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    char s[100]={'\0'};
    for ( int i=1 ; i<=a ; i++ )
    {
        if (b<=a-i+1)
        {
            for ( int j=1 ; j<=b ; j++ )
            {
                printf("%c",64+b);
            }
            printf("\n");
        }
        else
        {
            int dem=0;
            for ( int j=1 ; j<=b-(a-i+1)+1 ; j++)
            {
                printf("%c",64+b-(b-(a-i+1)+1)+j);
                dem++;
            }
            for ( int j=1 ; dem!=b ; j++ )
            {
                printf("%c",64+b);
                dem++;
            }
            printf("\n");
        }
    }
}