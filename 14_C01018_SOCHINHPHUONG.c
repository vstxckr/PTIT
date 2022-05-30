#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    int n;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        int temp=sqrt(n);
        if (temp*temp==n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}