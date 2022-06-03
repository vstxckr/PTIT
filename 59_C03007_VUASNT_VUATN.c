#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>

bool ktra_dx(int n)
{
    int temp=n;
    int check=0;
    while (temp!=0)
    {
        check=(temp%10)+check*10;
        temp/=10;
    }
    if (check==n)
    {
        return true;
    }
    else 
        return false;
}
bool ktra_snt(int n)
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
    for ( int i=1 ; i<=t ; i++)
    {
        int a,b;
        int dem=0;
        scanf("%d %d",&a,&b);
        for ( int j=a ; j<=b ; j++ )
        {
            if (ktra_dx(j)) 
            {
                if (ktra_snt(j))
                {
                    if (dem==10)
                    {
                        printf("\n");
                        dem=1;
                    }
                    else
                        dem++;
                    printf("%d ",j);
                }
            }
        }
        if (i!=t) printf("\n\n");
    }
}