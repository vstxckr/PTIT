#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool A[1000001];

bool kitunt(int n)
{
    if (n==2 || n==3 || n==5 || n==7)
        return true;
    return false;
}

bool chusont(int n)
{
    while (n!=0)
    {
        if (kitunt(n%10)==false)
        {
            return false;
        }
        n/=10;
    }
    return true;
}

void sangnt(int n)
{
    for ( int i=2 ; i<= sqrt(n); i++)
    {
        int j=i*i;
        while (j<=n)
        {
            A[j]=true;
            j+=i;
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    for ( int i=1 ; i<=t ; i++ )     
    {
        int a,b;
        int dem=0;
        scanf("%d %d",&a,&b);
        sangnt(b);
        for ( int j=a ; j<=b ; j++ )
        {
            if (A[j]==false && chusont(j)==true)
            {
                dem++;
            }
        }
        printf("%d\n",dem);
    }
}