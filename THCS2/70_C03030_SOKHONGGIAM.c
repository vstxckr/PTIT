#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

int k;
int n=9;
int A[100];
bool pivot=true;

void tohopketiep(void)
{
    int i=k;
    while (A[i]==n)
    {
        i--;
    }
    if (i==0)
    {
        pivot=false;
    }
    A[i]++;
    for ( int j=i+1 ; j<=k ; j++ )
    {
        A[j]=A[j-1];
    }
}

void inman()
{
    for ( int i=1 ; i<=k ; i++ )
    {
        printf("%d",A[i]);
    }
    printf(" ");
}

void khoitao()
{
    for ( int i=1 ; i<=k ; i++ )
    {
        A[i]=1;
    }        
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        pivot=true;
        scanf("%d",&k);
        khoitao();
        while (pivot)
        {
            inman();
            tohopketiep();
        }
        printf("\n");
    }
}