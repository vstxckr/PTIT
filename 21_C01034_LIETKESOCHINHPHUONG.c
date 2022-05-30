#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int temp=sqrt(a);
    if (temp*temp!=a)
    {
        temp++;
    }
    a=temp;
    int dem=0,A[100000]={0};
    while(a*a<=b)
    {
        dem++;
        A[dem-1]=a*a;
        a++;
    }
    printf("%d\n",dem);
    for ( int i=0 ; i<dem ; i++ )
    {
        printf("%d\n",A[i]);
    }
}