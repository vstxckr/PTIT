#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int s=0;
        int n;
        scanf("%d",&n);
        while (n!=0)
        {
            s+=n%10;
            n/=10;
        }
        printf("%d\n",s);
    }
}