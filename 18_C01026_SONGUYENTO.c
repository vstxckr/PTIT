#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int n)
{
    if (n<2) return false;
    for ( int i=2 ; i<=sqrt(n) ; i++ )
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if (isPrime(n)==true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}