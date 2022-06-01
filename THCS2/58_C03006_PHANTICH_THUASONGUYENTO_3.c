#include<stdio.h>
#include<stdbool.h>
#include<math.h>


int main()
{
    int t;
    scanf("%d",&t);
    for ( int j=1 ; j<=t ; j++)
    {
        int n,mu=0;
        scanf("%d",&n);
        printf("Test %d: ",j);

        int i=2;
        while (n%i==0)
        {
            mu++;
            n/=i;
        }
        if (mu!=0)
            printf("%d(%d) ",i,mu);
        for ( i=3 ; i<=sqrt(n) ; i+=2)
        {
            mu=0;
            while (n%i==0)
            {
                mu++;
                n/=i;
            }
            if (mu!=0)
            {
                printf("%d(%d) ",i,mu);
            }
        }
        if (n>1)
        {
            printf("%d(%d)",n,1);
        }
        printf("\n");
    }
}