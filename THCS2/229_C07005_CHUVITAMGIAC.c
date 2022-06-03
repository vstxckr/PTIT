#include<stdio.h>
#include<math.h>

#define true 1
#define false 0
#define p(x,y,z,w) sqrt((z-x)*(z-x) + (w-y)*(w-y))

typedef struct tamgiac{
    double a;
    double b;
    double c;
}tri;

char valid(double a, double b, double c)
{
    if ( a + b > c && a + c > b && b + c > a )
        return true;
    else
        return false;
}

char solve(tri *rec, int n)
{
    for ( int i = 0 ; i < n ; i++ )
    {
        double u,v,x,y,z,w;
        scanf("%lf %lf %lf %lf %lf %lf",&u, &v, &x, &y, &z, &w);
        rec[i].a = p(u,v,x,y);
        rec[i].b = p(x,y,z,w);
        rec[i].c = p(z,w,u,v);
        if ( !valid(rec[i].a, rec[i].b, rec[i].c) )
        {
            printf("INVALID\n");
            continue;
        }
        printf("%.3lf\n",rec[i].a + rec[i].b + rec[i].c);
    }
}


int main()
{
    int n;
    tri rec[100];
    scanf("%d",&n);
    solve(rec,n); 
}