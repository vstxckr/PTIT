#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<time.h>

bool ktrasogiam(int n)
{
    int a=n%10;
    n/=10;
    while (n!=0)
    {
        if (n%10<=a)
        {
            return false;
        }
        a=n%10;
        n/=10;
    }
    return true;
}

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        int dem=0;
        for ( int i=a ; i<=b ; i++ )
        {
            if (ktrasogiam(i))
            {
                dem++;
            }
        }
        printf("%d\n",dem);
    }
}