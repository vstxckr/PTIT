#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==0 && b==0)
    {
        printf("Vo so nghiem");
        return 0;
    }
    if (a==0)
    {
        printf("Vo nghiem");
        return 0;
    }
    printf("%.2lf",(double)-b/a);
}