#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int n;
    scanf("%d",&n);
    int le=0,chan=0;
    while (n!=0)
    {
        if (((n%10)&1)==0) 
            chan++;
        else 
            le++; 
        n/=10;
    }
    printf("%d %d",le,chan);
}