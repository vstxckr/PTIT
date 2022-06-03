#include<stdio.h>
#include<stdbool.h>
#include<math.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int gcd(int a,int b)

{
    while (a*b!=0)
    {
        a=a%b;
        swap(&a,&b);
    }
    return a+b;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--) 
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",gcd(a,b));
    }
}