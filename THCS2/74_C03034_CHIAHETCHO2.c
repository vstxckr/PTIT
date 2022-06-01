#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

int souoc(int n)
{
    int dem=0;
    for ( int i=1 ; i<=sqrt(n) ; i++ )
    {
        if (n%i==0)
        {
            if ((i&1)==0)
            {
                dem++;
            }
            if ( n/i!=i && ((n/i)&1)==0 )
            {
                dem++;
            }
        }
    }
    return dem;
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--) 
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",souoc(n));
    }
}