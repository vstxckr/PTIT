#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool kt_nt(char n)
{
    if ( n=='2' || n=='3' || n=='5' || n=='7')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void dem(char x[100])
{
    int lenx=strlen(x);
    int A[10]={0},B[10]={0};
    int dem=0;
    for ( int i=0 ; i<lenx ; i++ )
    {
        if (kt_nt(x[i]) && B[x[i]-48]==0)
        {
            dem++;
            A[dem]=x[i]-48;
            B[x[i]-48]++;
        }
        else
        {
            B[x[i]-48]++;
        }
    }
    for ( int i=1 ; i<=dem ; i++ )
    {
        printf("%d %d\n",A[i],B[A[i]]); 
    }
}

int main()
{
    char s[100]={'\0'};
    scanf("%s",&s);
    dem(s);
}